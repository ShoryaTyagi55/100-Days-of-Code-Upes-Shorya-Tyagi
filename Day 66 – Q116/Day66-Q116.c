
#include <stdio.h>

// Q116: Find two indices whose elements add up to the target

int main() {
    int n, a[100], target, found = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }

        if(found)
            break;
    }

    if(!found)
        printf("-1 -1");

    return 0;
}
