#include<stdio.h>

void main(){
    for (int r = 1; r <= 5; r++)
    {
        for(int sp=1;sp<=6-r;sp++){
            printf(" ");
        }

        for(int c=1;c<=r;c++){
           //printing 1

            printf("%d",c);
            
        }
        for (int c= r-1; c>= 1; c--)
        {
            printf("%d",c);
        }
        
        
        
        
        printf("\n");
    }
}

            
        
     
        
