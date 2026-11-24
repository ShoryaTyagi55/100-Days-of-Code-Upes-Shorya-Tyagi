
#include <stdio.h>

int main() {
    // Q91: Remove all vowels from a string

    char str[200];

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch != 'a' && ch != 'e' && ch != 'i' &&
           ch != 'o' && ch != 'u' &&
           ch != 'A' && ch != 'E' && ch != 'I' &&
           ch != 'O' && ch != 'U') {
            printf("%c", ch);
        }
    }

    return 0;
}

/*
Input:
Hello World
Output:
Hll Wrld
*/
