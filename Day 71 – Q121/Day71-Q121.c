
#include <stdio.h>

// Q121: Write name and age into info.txt

int main() {
    char name[100];
    int age;

    FILE *fp;

    fgets(name, sizeof(name), stdin);
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL) {
        printf("File could not be created.");
        return 1;
    }

    fprintf(fp, "Name: %sAge: %d\n", name, age);

    fclose(fp);

    printf("Data saved successfully.");

    return 0;
}
