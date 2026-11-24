
#include <stdio.h>

// Q125: Append a new line to an existing file

int main() {
    char filename[100], text[300];

    scanf("%99s", filename);

    getchar();

    FILE *fp = fopen(filename, "a");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Data appended successfully.");

    return 0;
}
