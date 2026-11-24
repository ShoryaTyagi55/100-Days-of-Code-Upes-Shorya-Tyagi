
#include <stdio.h>

int main() {
    // Q65: Search in a sorted array using binary search

    int n, a[100], target, low, high, mid, found = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == target) {
            found = mid;
            break;
        }
        else if(a[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}

/*
Input 1:
5 1 3 5 7 9 7
Output 1:
Found at index 3

Input 2:
5 1 3 5 7 9 6
Output 2:
-1
*/
