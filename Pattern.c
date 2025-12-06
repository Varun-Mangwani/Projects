
#include <stdio.h>

int main() {

for(int i=1;i<=5;i++){

    for(int j=1;j<=6-i;j++){

        printf("%c ",64+j);
    }

    printf("\n");
}

    return 0;
}