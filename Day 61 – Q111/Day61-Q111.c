
#include <stdio.h>

// Q111: Find the first negative number in every window of size k

int main() {
    int n, k, a[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {
        int found = 0;

        for(int j = i; j < i + k; j++) {
            if(a[j] < 0) {
                printf("%d ", a[j]);
                found = 1;
                break;
            }
        }

        if(!found)
            printf("0 ");
    }

    return 0;
}
