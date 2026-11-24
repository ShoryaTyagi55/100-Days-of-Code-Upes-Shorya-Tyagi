
#include <stdio.h>

// Q137: Display messages based on user role using enum

enum Role {
    ADMIN = 1, USER, GUEST
};

int main() {
    int choice;

    scanf("%d", &choice);

    switch(choice) {
        case ADMIN:
            printf("Welcome Admin");
            break;

        case USER:
            printf("Welcome User");
            break;

        case GUEST:
            printf("Welcome Guest");
            break;

        default:
            printf("Invalid role");
    }

    return 0;
}
