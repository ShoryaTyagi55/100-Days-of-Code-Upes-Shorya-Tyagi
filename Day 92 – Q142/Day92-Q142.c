
#include <stdio.h>

// Q142: Store and display details of five students using array of structures

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];

    for(int i = 0; i < 5; i++)
        scanf("%49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

    for(int i = 0; i < 5; i++) {
        printf("\nName: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
