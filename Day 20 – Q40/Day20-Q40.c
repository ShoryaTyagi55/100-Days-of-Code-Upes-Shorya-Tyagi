
/* Q40: Find 1's complement of binary number
Input 1:
1010
Output 1:
0101
Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>

int main() {
    long long n, place = 1, result = 0;
    scanf("%lld", &n);

    while(n > 0) {
        int digit = n % 10;
        result += (1 - digit) * place;
        place *= 10;
        n /= 10;
    }

    printf("%0*lld", (int)(place > 1 ? 0 : 1), result);
    return 0;
}
