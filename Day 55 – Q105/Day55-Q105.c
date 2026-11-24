
#include <stdio.h>

int main() {
    // Q105: Find the majority element

    int n, a[100], candidate, count;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    candidate = a[0];
    count = 0;

    for(int i = 0; i < n; i++) {
        if(count == 0)
            candidate = a[i];

        if(a[i] == candidate)
            count++;
        else
            count--;
    }

    count = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] == candidate)
            count++;
    }

    if(count > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}

/*
Input 1:
3 3 2 3
Output 1:
3

Input 2:
7 2 2 1 1 1 2 2
Output 2:
2

Input 3:
8 2 2 1 1 1 2 2 3
Output 3:
-1
*/
