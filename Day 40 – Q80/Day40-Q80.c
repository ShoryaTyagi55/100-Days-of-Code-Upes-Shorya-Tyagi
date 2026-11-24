
#include <stdio.h>

int main() {
    // Q80: Multiply two matrices

    int r1, c1, r2, c2;
    int a[10][10], b[10][10], result[10][10] = {0};

    scanf("%d %d", &r1, &c1);

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    }

    scanf("%d %d", &r2, &c2);

    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    }

    if(c1 != r2) {
        printf("Multiplication not possible");
        return 0;
    }

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
    }

    return 0;
}

/*
Input format:
Rows and columns of first matrix, its elements,
rows and columns of second matrix, its elements
*/
