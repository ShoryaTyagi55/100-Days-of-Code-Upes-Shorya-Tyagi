
#include <stdio.h>

int main() {
    // Q104: Find pivot integer

    int n, x, left, right;

    scanf("%d", &n);

    for(x = 1; x <= n; x++) {
        left = x * (x + 1) / 2;
        right = n * (n + 1) / 2 - (x - 1) * x / 2;

        if(left == right) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}

/*
Input 1:
8
Output 1:
6

Input 2:
1
Output 2:
1

Input 3:
4
Output 3:
-1
*/
