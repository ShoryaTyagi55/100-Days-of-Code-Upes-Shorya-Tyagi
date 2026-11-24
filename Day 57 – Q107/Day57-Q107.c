
#include <stdio.h>

int main() {
    // Q107: Find previous greater element using nested loops

    int n, a[100], previous;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        previous = -1;

        for(int j = i - 1; j >= 0; j--) {
            if(a[j] > a[i]) {
                previous = a[j];
                break;
            }
        }

        printf("%d", previous);

        if(i < n - 1)
            printf(", ");
    }

    return 0;
}

/*
Input 1:
4 1 3 2 4
Output 1:
-1, -1, 3, -1

Input 2:
5 6 8 0 1 3
Output 2:
-1, -1, 8, 8, 8

Input 3:
4 1 2 3 5
Output 3:
-1, -1, -1, -1

Input 4:
4 5 4 3 1
Output 4:
-1, 5, 4, 3
*/
