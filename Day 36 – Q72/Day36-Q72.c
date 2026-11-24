
#include <stdio.h>

int main() {
    // Q72: Find the sum of all matrix elements

    int r, c, a[10][10], sum = 0;

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}

/*
Input 1:
2 3 1 2 3 4 5 6
Output 1:
21
*/
