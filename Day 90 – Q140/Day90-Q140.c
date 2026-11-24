
#include <stdio.h>

// Q140: Use an enum inside a structure to store gender

enum Gender {
    MALE = 1, FEMALE, OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    scanf("%49s %d", p.name, (int *)&p.gender);

    printf("Name: %s\n", p.name);

    switch(p.gender) {
        case MALE:
            printf("Gender: Male");
            break;

        case FEMALE:
            printf("Gender: Female");
            break;

        case OTHER:
            printf("Gender: Other");
            break;

        default:
            printf("Invalid gender");
    }

    return 0;
}
