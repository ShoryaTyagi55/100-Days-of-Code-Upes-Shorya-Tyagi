
#include <stdio.h>

// Q124: Copy contents from one file to another

int main() {
    char source[100], destination[100];
    int ch;

    scanf("%99s %99s", source, destination);

    FILE *fp1 = fopen(source, "r");

    if(fp1 == NULL) {
        printf("Source file could not be opened.");
        return 1;
    }

    FILE *fp2 = fopen(destination, "w");

    if(fp2 == NULL) {
        printf("Destination file could not be opened.");
        fclose(fp1);
        return 1;
    }

    while((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp2);

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.");

    return 0;
}
