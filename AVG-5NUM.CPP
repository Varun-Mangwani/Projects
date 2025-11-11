#include <stdio.h>
#include <conio.h>

void main()
{

    int avg, i, num, sum = 0, flag = 0;

    
    i = 1;
    while (i <= 10)
    {

        printf("Enter The numbers: ");

        scanf("%d", &num);

        if (flag <= 5)
        {

            sum = sum + num;

            flag++;
        }

        i++;
    }
    avg = sum / 5;
    printf("The avg of first five num is %d", avg);
    getch();
}