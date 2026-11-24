
#include <stdio.h>

int main() {
    // Q108: Product of all elements except current element

    int n, a[100], answer[100], product = 1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        answer[i] = 1;

        for(int j = 0; j < n; j++) {
            if(i != j)
                answer[i] *= a[j];
        }
    }

    printf("[");

    for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if(i < n - 1)
            printf(",");
    }

    printf("]");

    return 0;
}

/*
Input 1:
4 1 2 3 4
Output 1:
[24,12,8,6]

Input 2:
5 -1 1 0 -3 3
Output 2:
[0,0,9,0,0]
*/
