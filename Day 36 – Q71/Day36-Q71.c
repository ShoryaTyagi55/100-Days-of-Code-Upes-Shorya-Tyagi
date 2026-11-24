
#include <stdio.h>

int main() {
    // Q71: Read and print a matrix

    int r, c, a[10][10];

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}

/*
Input 1:
2 2 1 2 3 4
Output 1:
1 2 3 4
*/
