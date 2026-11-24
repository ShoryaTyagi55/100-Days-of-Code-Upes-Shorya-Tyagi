
#include <stdio.h>

int main() {
    // Q64: Find the most frequent digit

    int n, digit, count[10] = {0}, max = 0, answer = 0;

    scanf("%d", &n);

    if(n == 0)
        count[0] = 1;

    while(n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            answer = i;
        }
    }

    printf("%d", answer);

    return 0;
}

/*
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/
