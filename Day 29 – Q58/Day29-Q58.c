
#include <stdio.h>

int main() {
    // Q58: Find maximum and minimum element in an array

    int n, a[100], max, min;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for(int i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}

/*
Input 1:
5 2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3 10 10 10
Output 2:
Max=10, Min=10
*/
