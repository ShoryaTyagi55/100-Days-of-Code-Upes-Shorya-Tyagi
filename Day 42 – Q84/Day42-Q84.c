
#include <stdio.h>

int main() {
    // Q84: Convert lowercase string to uppercase manually

    char str[200];

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("%s", str);

    return 0;
}

/*
Input:
hello world
Output:
HELLO WORLD
*/
