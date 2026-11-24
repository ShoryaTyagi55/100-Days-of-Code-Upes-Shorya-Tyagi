
#include <stdio.h>

int main() {
    // Q85: Reverse a string

    char str[200], temp;
    int len = 0;

    fgets(str, sizeof(str), stdin);

    while(str[len] != '\0' && str[len] != '\n')
        len++;

    for(int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    str[len] = '\0';

    printf("%s", str);

    return 0;
}

/*
Input:
hello
Output:
olleh
*/
