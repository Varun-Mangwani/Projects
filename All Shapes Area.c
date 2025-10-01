#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{
    int choice;
    int area, length, bredth, radius, side, base, height;
    printf("---------------------------\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Square\n");
    printf("3. Area of Reactangle\n");
    printf("4. Area of Parallelogram\n");
    printf("0. Exit From Programme\n");
    printf("---------------------------\n");

    printf("Select 1-5 Range: ");
    scanf("%d", &choice);

    switch (choice)

    {
    case 1:
        printf("Enter Radius Of circle: ");
        scanf("%d", &radius);
        area = PI * radius * radius;
        printf("Result: %d", area);

        break;
    case 2:
        printf("Enter Side of Square: ");
        scanf("%d", &side);
        area = side * side;
        printf("Area Is: %d", area);
        break;
    case 3:
        printf("Enter Length And Bredth:\n");
        printf("Length: ");
        scanf("%d", &length);
        printf("Bredth: ", bredth);
        scanf("%d", &bredth);
        area = length * bredth;
        printf("Area Of Rectangle: %d", area);
        break;
    case 4:
        printf("Enter Base and Height\n");
        printf("Enter Base: ");
        scanf("%d", &base);
        printf("Enter Height: ");
        scanf("%d", &height);
        area = base * height;
        printf("Area Of Parallelogram is %d", area);

        break;
        case 0:
exit(0);
        break;

    default:
        printf("Use Given Option");
    }
    return 0;
}