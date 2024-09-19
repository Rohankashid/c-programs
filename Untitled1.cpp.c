#include <graphics.h>

const int windowWidth = 800;
const int windowHeight = 600;
const int towerHeight = 400;
const int towerWidth = 10;
const int diskHeight = 20;
const int diskWidthFactor = 50;
const int diskHeightFactor = 10;
const int diskSpacing = 5;
const int numDisks = 3;
const int numTowers = 3;

struct Disk {
    sf::RectangleShape shape;
    int size;
};

std::vector<Disk> disks;
std::vector<std::stack<Disk*>> towers(numTowers);

void initializeDisks() {
    for (int i = 0; i < numDisks; ++i) {
        int diskWidth = (numDisks - i) * diskWidthFactor;
        int diskHeight = diskHeightFactor;

        sf::RectangleShape shape(sf::Vector2f(diskWidth, diskHeight));
        shape.setFillColor(sf::Color::Blue);

        Disk disk;
        disk.shape = shape;
        disk.size = diskWidth;

        disks.push_back(disk);
        towers[0].push(&disks[i]);
    }
}

void drawTowers(sf::RenderWindow& window) {
    for (int i = 0; i < numTowers; ++i) {
        sf::RectangleShape tower(sf::Vector2f(towerWidth, towerHeight));
        tower.setPosition((i + 1) * (windowWidth / (numTowers + 1)) - towerWidth / 2, windowHeight - towerHeight);
        tower.setFillColor(sf::Color::Black);

        window.draw(tower);
    }
}

void drawDisks(sf::RenderWindow& window) {
    for (int i = 0; i < numTowers; ++i) {
        std::stack<Disk*> tower = towers[i];
        int x = (i + 1) * (windowWidth / (numTowers + 1));
        int y = windowHeight - towerHeight + diskHeight + diskSpacing;

        while (!tower.empty()) {
            Disk* disk = tower.top();
            tower.pop();

            disk->shape.setPosition(x - disk->size / 2, y);
            y -= diskHeight + diskSpacing;

            window.draw(disk->shape);
        }
    }
}

void moveDisk(int start, int end) {
    Disk* disk = towers[start].top();
    towers[start].pop();
    towers[end].push(disk);
}

void hanoi(int n, int start, int end, int auxiliary) {
    if (n > 0) {
        hanoi(n - 1, start, auxiliary, end);
        moveDisk(start, end);
        hanoi(n - 1, auxiliary, end, start);
    }
}

int main() {
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Tower of Hanoi");
    window.setFramerateLimit(60);

    initializeDisks();

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear(sf::Color::White);

        drawTowers(window);
        drawDisks(window);

        window.display();

        hanoi(numDisks, 0, 2, 1);
    }

    return 0;
}
