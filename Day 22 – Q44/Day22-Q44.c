
/* Q44: Sum of series 1 + 3/4 + 5/6 + ...
Input 1:
3
Output 1:
Approximate sum: 3.3
Input 2:
5
Output 2:
Approximate sum: 4.4
*/

#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    scanf("%d", &n);

    sum = 1;

    for(int i = 2; i <= n; i++) {
        sum += (float)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.1f", sum);
    return 0;
}
