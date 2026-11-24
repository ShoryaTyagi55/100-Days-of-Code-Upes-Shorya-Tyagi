
#include <stdio.h>

int main() {
    // Q67: Insert an element at a given position (0-based)

    int n, a[100], pos, x;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &pos, &x);

    for(int i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;
    n++;

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

/*
Input 1:
4 10 20 30 40 2 15
Output 1:
10 20 15 30 40
*/
