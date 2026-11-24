
#include <stdio.h>

// Q123: Count characters, words and lines in a file

int main() {
    char filename[100];
    int ch, characters = 0, words = 0, lines = 0;
    int inWord = 0, last = '\0';

    scanf("%99s", filename);

    FILE *fp = fopen(filename, "r");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        characters++;

        if(ch == '\n')
            lines++;

        if(ch == ' ' || ch == '\n' || ch == '\t')
            inWord = 0;
        else if(!inWord) {
            words++;
            inWord = 1;
        }

        last = ch;
    }

    if(characters > 0 && last != '\n')
        lines++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d", lines);

    fclose(fp);

    return 0;
}
