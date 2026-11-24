
#include <stdio.h>

// Q126: Check whether a file exists and display its contents

int main() {
    char filename[100], line[200];

    scanf("%99s", filename);

    FILE *fp = fopen(filename, "r");

    if(fp == NULL) {
        printf("Error: File does not exist!");
        return 1;
    }

    printf("File opened successfully.\n");

    while(fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);

    return 0;
}
