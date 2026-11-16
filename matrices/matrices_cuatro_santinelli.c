#include <stdio.h>

int main() {
    int A[4] = {0, 0, 1, 1};
    int B[4] = {0, 1, 0, 1};
    int AND[4], OR[4], XOR[4], NAND[4];
    int i;

    for (i = 0; i < 4; i++) {
        AND[i] = A[i] && B[i];
        OR[i] = A[i] || B[i];
        XOR[i] = A[i] != B[i] ? 1 : 0; 
        NAND[i] = !(A[i] && B[i]);
    }

    printf("TABLAS DE VERDAD DE COMPUERTAS LOGICAS\n");
    printf("A | B | AND | OR | XOR | NAND\n");
    printf("-----------------------------\n");

    for (i = 0; i < 4; i++) {
        printf("%d | %d |  %d  |  %d  |  %d  |  %d\n", A[i], B[i], AND[i], OR[i], XOR[i], NAND[i]);
    }

    return 0;
}
