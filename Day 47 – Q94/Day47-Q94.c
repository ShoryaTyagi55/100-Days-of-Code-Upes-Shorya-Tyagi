
#include <stdio.h>

int main() {
    // Q94: Find the longest word in a sentence

    char str[300], word[100];
    int i = 0, j, len, max = 0, start = 0, best = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        while(str[i] == ' ')
            i++;

        start = i;
        len = 0;

        while(str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            len++;
            i++;
        }

        if(len > max) {
            max = len;
            best = start;
        }

        if(str[i] == '\0')
            break;
    }

    for(j = 0; j < max; j++)
        printf("%c", str[best + j]);

    return 0;
}

/*
Input:
C programming is interesting
Output:
programming
*/
