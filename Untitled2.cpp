#include <stdio.h>
#include <conio.h>
#include <graphics.h>




#define MAX_DISKS 10

void drawPegs(int numDisks);
void drawDisk(int peg, int disk, int numDisks);
void moveDisk(int disk, int fromPeg, int toPeg, int numDisks);
void towerOfHanoi(int numDisks, int fromPeg, int toPeg, int auxPeg);

int main()
{
    int numDisks;

    printf("Enter the number of disks (1-%d): ", MAX_DISKS);
    scanf("%d", &numDisks);

    if (numDisks < 1 || numDisks > MAX_DISKS)
    {
        printf("Invalid number of disks. Exiting...");
        return 1;
    }

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    drawPegs(numDisks);
    towerOfHanoi(numDisks, 1, 3, 2);

    getch();
    closegraph();
    return 0;
}

void drawPegs(int numDisks)
{
    int pegWidth = 180;
    int pegHeight = 400;
    int startX = 320 - pegWidth / 2;
    int startY = 480 - pegHeight;

    // Draw pegs
    setfillstyle(SOLID_FILL, WHITE);
    bar(startX, startY, startX + pegWidth, startY + pegHeight);

    setfillstyle(SOLID_FILL, BLACK);
    bar(startX - 20, startY + pegHeight - 20, startX + pegWidth + 20, startY + pegHeight);

    // Draw disks
    int diskWidth = 20;
    int diskHeight = 20;
    int diskSpacing = 10;
    int maxDiskWidth = diskWidth + (numDisks - 1) * diskSpacing;

    for (int i = 0; i < 3; i++)
    {
        int pegX = startX + i * pegWidth / 2;
        int pegY = startY + pegHeight;

        for (int j = 0; j < numDisks; j++)
        {
            int diskX = pegX - maxDiskWidth / 2 + j * diskSpacing;
            int diskY = pegY - (numDisks - j) * diskHeight;

            drawDisk(i, j, numDisks);
            delay(100);
        }
    }
}

void drawDisk(int peg, int disk, int numDisks)
{
    int pegWidth = 180;
    int pegHeight = 400;
    int startX = 320 - pegWidth / 2;
    int startY = 480 - pegHeight;

    int diskWidth = 20;
    int diskHeight = 20;
    int diskSpacing = 10;
    int maxDiskWidth = diskWidth + (numDisks - 1) * diskSpacing;

    int pegX = startX + peg * pegWidth / 2;
    int pegY = startY + pegHeight;

    int diskX = pegX - maxDiskWidth / 2 + disk * diskSpacing;
    int diskY = pegY - (numDisks - disk) * diskHeight;

    setfillstyle(SOLID_FILL, YELLOW);
    bar(diskX, diskY, diskX + diskWidth, diskY + diskHeight);
}

void moveDisk(int disk, int fromPeg, int toPeg, int numDisks)
{
    int pegWidth = 180;
    int pegHeight = 400;
    int startX = 320 - pegWidth / 2;
    int startY = 480 - pegHeight;

    int diskWidth = 20;
    int diskHeight = 20;
    int diskSpacing = 10;
    int maxDiskWidth = diskWidth + (numDisks - 1) * diskSpacing;

    int pegX = startX + (fromPeg - 1) * pegWidth / 2;
    int pegY = startY + pegHeight;

    int diskX = pegX - maxDiskWidth / 2 + disk * diskSpacing;
    int diskY = pegY - (numDisks - disk) * diskHeight;

    setfillstyle(SOLID_FILL, WHITE);
    bar(diskX, diskY, diskX + diskWidth, diskY + diskHeight);

    pegX = startX + (toPeg - 1) * pegWidth / 2;
    pegY = startY + pegHeight;

    diskX = pegX - maxDiskWidth / 2 + disk * diskSpacing;
    diskY = pegY - (numDisks - disk + 1) * diskHeight;

    setfillstyle(SOLID_FILL, YELLOW);
    bar(diskX, diskY, diskX + diskWidth, diskY + diskHeight);
}

void towerOfHanoi(int numDisks, int fromPeg, int toPeg, int auxPeg)
{
    if (numDisks == 1)
    {
        moveDisk(0, fromPeg, toPeg, numDisks);
        return;
    }

    towerOfHanoi(numDisks - 1, fromPeg, auxPeg, toPeg);
    moveDisk(numDisks - 1, fromPeg, toPeg, numDisks);
    towerOfHanoi(numDisks - 1, auxPeg, toPeg, fromPeg);
}
