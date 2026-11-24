
#include <stdio.h>

int main() {
    // Q61: Search an element using linear search

    int n, a[100], target, found = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        if(a[i] == target) {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}

/*
Input 1:
5 1 2 3 4 5 3
Output 1:
Found at index 2

Input 2:
4 10 20 30 40 25
Output 2:
-1
*/
