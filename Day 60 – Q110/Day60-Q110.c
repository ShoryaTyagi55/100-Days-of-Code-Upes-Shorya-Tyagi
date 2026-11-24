
#include <stdio.h>

int main() {
    // Q110: Find maximum element in every window of size k

    int n, a[100], k, max;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {
        max = a[i];

        for(int j = i + 1; j < i + k; j++) {
            if(a[j] > max)
                max = a[j];
        }

        printf("%d ", max);
    }

    return 0;
}

/*
Input 1:
9 1 2 3 1 4 5 2 3 6 3
Output 1:
3 3 4 5 5 5 6

Input 2:
5 5 1 3 4 2 1
Output 2:
5 1 3 4 2
*/
