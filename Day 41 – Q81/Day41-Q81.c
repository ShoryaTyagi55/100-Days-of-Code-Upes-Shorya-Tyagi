
#include <stdio.h>

int main() {
    // Q81: Count characters without using strlen

    char str[200];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    while(str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d", count);

    return 0;
}

/*
Input 1:
Hello
Output 1:
5
*/
