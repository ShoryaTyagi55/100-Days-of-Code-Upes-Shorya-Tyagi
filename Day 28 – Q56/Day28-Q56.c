
#include <stdio.h>

int main() {
    // Q56: Read and print elements of a 1D array

    int n, a[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

/*
Input 1:
3 10 20 30
Output 1:
10 20 30

Input 2:
5 1 2 3 4 5
Output 2:
1 2 3 4 5
*/
