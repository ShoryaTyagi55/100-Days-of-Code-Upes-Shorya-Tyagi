
// Q28 Write a program to print the product of even numbers from 1 to n.

/*
Input 1:
6
Output 1:
48

Input 2:
10
Output 2:
3840
*/

#include<stdio.h>

int main() {
    int n, product = 1;
    scanf("%d", &n);

    for(int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%d", product);

    return 0;
}
