
#include <stdio.h>

// Q145: Return the student with the highest marks from a function

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopper(struct Student s[], int n) {
    int highest = 0;

    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[highest].marks)
            highest = i;
    }

    return s[highest];
}

int main() {
    struct Student s[100], topper;
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

    topper = findTopper(s, n);

    printf("Top Student: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_no);
    printf("Marks: %.2f", topper.marks);

    return 0;
}
