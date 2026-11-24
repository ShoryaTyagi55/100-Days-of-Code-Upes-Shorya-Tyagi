
#include <stdio.h>

// Q134: Display messages using enum status codes

enum Status {
    SUCCESS, FAILURE, TIMEOUT
};

int main() {
    enum Status status;

    status = SUCCESS;
    printf("Operation successful.\n");

    status = FAILURE;
    printf("Operation failed.\n");

    status = TIMEOUT;
    printf("Operation timed out.\n");

    return 0;
}
