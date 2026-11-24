
#include <stdio.h>

int main() {
    // Q69: Find the second largest distinct element

    int n, a[100], largest, second;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = second = -2147483647 - 1;

    for(int i = 0; i < n; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("%d", second);

    return 0;
}

/*
Input 1:
5 10 20 30 40 50
Output 1:
40
*/
