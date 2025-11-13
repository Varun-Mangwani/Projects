#include <stdio.h>
#include <windows.h>

int i, num, tbl;

int table();

int main()
{
    table();

    return 0;
}

int table()
{

    printf("Enter The Number");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        tbl = num * i;
        printf("\n%dx%d = %d", num, i, tbl);
    }
    return 0;
}