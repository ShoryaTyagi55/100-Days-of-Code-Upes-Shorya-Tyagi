
#include <stdio.h>

int main() {
    // Q100: Print all substrings of a string

    char str[100];

    scanf("%99s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        for(int j = i; str[j] != '\0'; j++) {
            for(int k = i; k <= j; k++)
                printf("%c", str[k]);

            printf("\n");
        }
    }

    return 0;
}

/*
Input:
abc

Output:
a
ab
abc
b
bc
c
*/
