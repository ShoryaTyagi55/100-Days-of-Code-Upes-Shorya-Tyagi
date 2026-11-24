
#include <stdio.h>

// Q143: Find the student with the highest marks

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int highest = 0;

    for(int i = 0; i < 5; i++)
        scanf("%49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

    for(int i = 1; i < 5; i++) {
        if(s[i].marks > s[highest].marks)
            highest = i;
    }

    printf("Top Student: %s\n", s[highest].name);
    printf("Roll Number: %d\n", s[highest].roll_no);
    printf("Marks: %.2f", s[highest].marks);

    return 0;
}
