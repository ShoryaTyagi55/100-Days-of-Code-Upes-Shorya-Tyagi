
#include <stdio.h>

// Q136: Perform arithmetic operations using enum menu choices

enum Operations {
    ADD = 1, SUBTRACT, MULTIPLY
};

int main() {
    int choice, a, b;

    scanf("%d %d %d", &choice, &a, &b);

    switch(choice) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
