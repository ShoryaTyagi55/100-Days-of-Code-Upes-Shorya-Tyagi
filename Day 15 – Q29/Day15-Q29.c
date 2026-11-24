
/* Q29: Factorial of a number
Input 1:
5
Output 1:
120
Input 2:
3
Output 2:
6
*/

#include <stdio.h>

int main() {
    int n, fact = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d", fact);
    return 0;
}
