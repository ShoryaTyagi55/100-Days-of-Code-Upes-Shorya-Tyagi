
#include <stdio.h>

// Q122: Read and display the contents of info.txt

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    while(fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);

    return 0;
}
