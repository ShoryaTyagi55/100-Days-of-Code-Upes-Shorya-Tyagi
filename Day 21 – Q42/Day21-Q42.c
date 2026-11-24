
/* Q42: Check perfect number
Input 1:
6
Output 1:
Perfect number
Input 2:
10
Output 2:
Not perfect number
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    for(int i = 1; i < n; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n && n > 1)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}
