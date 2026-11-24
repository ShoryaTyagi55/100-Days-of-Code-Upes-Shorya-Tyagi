
#include <stdio.h>

// Q130: Store and display multiple student records using a file

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    int n;

    FILE *fp = fopen("students.txt", "w");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%49s %d %f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if(fp == NULL)
        return 1;

    while(fscanf(fp, "%49s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s\n", s.name);
        printf("Roll: %d\n", s.roll);
        printf("Marks: %.2f\n", s.marks);
    }

    fclose(fp);

    return 0;
}
