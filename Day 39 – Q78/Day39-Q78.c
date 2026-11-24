
#include <stdio.h>

int main() {
    // Q78: Find sum of main diagonal elements

    int n, a[10][10], sum = 0;

    scanf("%d %d", &n, &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);

            if(i == j)
                sum += a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}

/*
Input format:
Order of square matrix followed by its elements
*/
