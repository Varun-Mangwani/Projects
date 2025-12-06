

### C Code:
```c
#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 6 - i; j++) {
            printf("%c ", 64 + j);
        }
        printf("\n");
    }
    return 0;
}

Description:

The program uses nested for loops to generate a pattern.

64 + j is used to convert numbers into ASCII uppercase letters (A=65).

Outer loop (i) controls the number of rows.

Inner loop (j) prints letters decreasing by row.


Output:

A B C D E 
A B C D 
A B C 
A B 
A

Notes:

You can run this code on any online C compiler like OnlineGDB or Programiz.

Modify the outer loop to change the number of row