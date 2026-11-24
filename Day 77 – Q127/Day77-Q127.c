
#include <stdio.h>
#include <ctype.h>

// Q127: Convert lowercase text from input.txt to uppercase in output.txt

int main() {
    FILE *fp1 = fopen("input.txt", "r");
    FILE *fp2 = fopen("output.txt", "w");

    if(fp1 == NULL || fp2 == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    int ch;

    while((ch = fgetc(fp1)) != EOF)
        fputc(toupper((unsigned char)ch), fp2);

    fclose(fp1);
    fclose(fp2);

    printf("File converted successfully.");

    return 0;
}
