
/* Q38: Sum of digits
Input 1:
123
Output 1:
6
Input 2:
999
Output 2:
27
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("%d", sum);
    return 0;
}
