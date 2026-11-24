
/* Q33: Check Armstrong number
Input 1:
153
Output 1:
Armstrong
Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, count = 0, sum = 0;
    scanf("%d", &n);

    original = n;
    int temp = n;

    do {
        count++;
        temp /= 10;
    } while(temp > 0);

    temp = n;

    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if(sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
