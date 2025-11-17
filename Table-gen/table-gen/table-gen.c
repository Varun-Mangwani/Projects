#include<stdio.h>

void main(){

    int tbl,num;
    printf("Enter the number: ");
    scanf("%d",&num);

    for(int i = 1;  i<=10;i++){
            tbl = num*i;        //tbl = 2*1 // 2*2//2*3//2*4 .....2*10
            printf("\n %dX%d=%d",num,i,tbl);
    }
}
//find code on github.com/Varun-Mangwani/c-projects/table-gen