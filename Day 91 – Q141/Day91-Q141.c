
#include <stdio.h>

// Q141: Read and display student details using structure

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    scanf("%49s %d %f", s.name, &s.roll_no, &s.marks);

    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f", s.marks);

    return 0;
}
