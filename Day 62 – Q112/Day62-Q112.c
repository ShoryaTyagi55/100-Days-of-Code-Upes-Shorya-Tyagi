
#include <stdio.h>

// Q112: Find the maximum subarray sum using Kadane's Algorithm

int main() {
    int n, a[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int maxSum = a[0], currentSum = a[0];

    for(int i = 1; i < n; i++) {
        if(currentSum < 0)
            currentSum = a[i];
        else
            currentSum += a[i];

        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d", maxSum);

    return 0;
}
