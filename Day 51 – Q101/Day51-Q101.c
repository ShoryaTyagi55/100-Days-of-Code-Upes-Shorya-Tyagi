
#include <stdio.h>

int main() {
    // Q101: Find first and last occurrence in sorted array

    int n, a[100], target, first = -1, last = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        if(a[i] == target) {
            if(first == -1)
                first = i;

            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}

/*
Input 1:
6 5 7 7 8 8 10 8
Output 1:
3,4

Input 2:
6 5 7 7 8 8 10 6
Output 2:
-1,-1

Input 3:
6 5 7 7 8 8 10 10
Output 3:
5,5
*/
