#include <stdio.h>
void main()

{
    int age, marks;
    printf("\n enter your age");
    scanf("%d", &age);
    printf("\n enter your marks");
    scanf("%d", &marks);

    switch (age)

    {
    case 3:
        printf("\n the age is 3");
        switch (marks)
        {

        case 45:
            printf("\n your marks are 45");
            break;

        default:
            printf("\n your marks are not 45");
        }
        break;

    case 13:
        printf("\n the age is 13");
        break;

    case 23:
        printf("\n the age is 23");
        break;

    default:
        printf("\n age is not 3,13 nor 23");
    }
}