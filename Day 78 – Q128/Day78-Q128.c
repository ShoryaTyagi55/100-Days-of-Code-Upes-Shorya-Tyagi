
#include <stdio.h>
#include <ctype.h>

// Q128: Count vowels and consonants in a file

int main() {
    FILE *fp = fopen("input.txt", "r");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    int ch, vowels = 0, consonants = 0;

    while((ch = fgetc(fp)) != EOF) {
        ch = tolower((unsigned char)ch);

        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);

    fclose(fp);

    return 0;
}
