
#include <stdio.h>

int main() {
    // Q103: Find the leftmost pivot index

    int n, a[100], total = 0, left = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for(int i = 0; i < n; i++) {
        if(left == total - left - a[i]) {
            printf("%d", i);
            return 0;
        }

        left += a[i];
    }

    printf("-1");

    return 0;
}

/*
Input 1:
6 1 7 3 6 5 6
Output 1:
3

Input 2:
3 1 2 3
Output 2:
-1

Input 3:
3 2 1 -1
Output 3:
0
*/
