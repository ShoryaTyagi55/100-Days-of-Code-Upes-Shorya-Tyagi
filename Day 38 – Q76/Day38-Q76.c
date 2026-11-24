
#include <stdio.h>

int main() {
    // Q76: Check if a matrix is symmetric

    int n, a[10][10], symmetric = 1;

    scanf("%d %d", &n, &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i])
                symmetric = 0;
        }
    }

    if(symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}

/*
Input 1:
2 2 1 2 2 1
Output 1:
True

Input 2:
2 2 1 0 2 1
Output 2:
False
*/
