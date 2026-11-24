
/* Q41: Swap first and last digit
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>

int main() {
    int n, first, last, temp, divisor = 1;
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while(temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    first = temp;

    int middle = (n % divisor) / 10;
    int result = last * divisor + middle * 10 + first;

    printf("%d", result);
    return 0;
}
