
#include <stdio.h>

int main() {
    // Q109: Find maximum sum of subarray of size k

    int n, a[100], k, sum = 0, max;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for(int i = 0; i < k; i++)
        sum += a[i];

    max = sum;

    for(int i = k; i < n; i++) {
        sum = sum - a[i - k] + a[i];

        if(sum > max)
            max = sum;
    }

    printf("%d", max);

    return 0;
}

/*
Input 1:
4 100 200 300 400 2
Output 1:
700

Input 2:
9 1 4 2 10 23 3 1 0 20 4
Output 2:
39

Input 3:
4 100 200 300 400 1
Output 3:
400
*/
