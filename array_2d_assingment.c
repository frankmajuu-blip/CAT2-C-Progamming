/*
NAME:NDUNGU FRANCIS
REG:CT100/G/26209/25
DESCRIPTION:
A PROGRAME that demonsrtate how to declare,initialize and print the elements of two matrices each 2* by use of a for loop.
*/


#include <stdio.h>

int main() {
    
    int A[2][2] = {{65, 92}, {84, 72}};
    
    
    int B[2][2] = {{35, 70}, {59, 67}};

    
    printf("First Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Printing second matrix
    printf("Second Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}

