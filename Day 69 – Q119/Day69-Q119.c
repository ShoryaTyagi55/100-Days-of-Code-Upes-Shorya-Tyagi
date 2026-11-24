
#include <stdio.h>

// Q119: Find the repeated element in one traversal

int main() {
    int n, a[100], seen[1001] = {0};

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        if(seen[a[i]] == 1) {
            printf("%d", a[i]);
            return 0;
        }

        seen[a[i]] = 1;
    }

    return 0;
}
