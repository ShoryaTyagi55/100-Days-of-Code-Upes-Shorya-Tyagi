
#include <stdio.h>

int main() {
    // Q62: Reverse an array without extra space

    int n, a[100], temp;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

/*
Input 1:
4 1 2 3 4
Output 1:
4 3 2 1
*/
