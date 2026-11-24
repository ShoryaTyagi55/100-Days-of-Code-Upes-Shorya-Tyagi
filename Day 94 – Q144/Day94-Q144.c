
#include <stdio.h>

// Q144: Pass a structure to a function and display its members

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void display(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f", s.marks);
}

int main() {
    struct Student s;

    scanf("%49s %d %f", s.name, &s.roll_no, &s.marks);

    display(s);

    return 0;
}
