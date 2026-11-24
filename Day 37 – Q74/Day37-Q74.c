
#include <stdio.h>

int main() {
    // Q74: Find the transpose of a matrix

    int r, c, a[10][10];

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int j = 0; j < c; j++) {
        for(int i = 0; i < r; i++) {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}

/*
Input 1:
2 3 1 2 3 4 5 6
Output 1:
1 4 2 5 3 6
*/
