
#include <stdio.h>

int main() {
    // Q82: Print each character on a new line

    char str[200];

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}

/*
Input:
Hello

Output:
H
e
l
l
o
*/
