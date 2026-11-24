
#include <stdio.h>

int main() {
    // Q102: Find index of smallest element greater than or equal to x

    int n, a[100], x, low, high, mid, answer = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] >= x) {
            answer = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("%d", answer);

    return 0;
}

/*
Input 1:
7 1 2 8 10 11 12 19 5
Output 1:
2

Input 2:
7 1 2 8 10 11 12 19 20
Output 2:
-1

Input 3:
8 1 1 2 8 10 11 12 19 0
Output 3:
0

Input 4:
8 1 1 2 8 10 11 12 19 2
Output 4:
2
*/
