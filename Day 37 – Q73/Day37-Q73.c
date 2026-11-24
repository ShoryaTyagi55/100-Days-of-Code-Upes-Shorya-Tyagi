
#include <stdio.h>

int main() {
    // Q73: Find sum of each matrix row

    int r, c, a[10][10], sum[10];

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++) {
        sum[i] = 0;

        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}

/*
Input 1:
2 3 1 2 3 4 5 6
Output 1:
6 15
*/
