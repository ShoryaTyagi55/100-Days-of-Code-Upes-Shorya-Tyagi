
/* Q34: Check prime number
Input 1:
7
Output 1:
Prime
Input 2:
10
Output 2:
Not prime
*/

#include <stdio.h>

int main() {
    int n, prime = 1;
    scanf("%d", &n);

    if(n <= 1)
        prime = 0;

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            prime = 0;
            break;
        }
    }

    if(prime)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
