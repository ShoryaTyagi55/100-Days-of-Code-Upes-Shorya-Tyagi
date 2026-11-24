
#include <stdio.h>

// Q135: Assign explicit integer values to enum constants

enum Numbers {
    FIRST = 10,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
};

int main() {
    printf("%d\n", FIRST);
    printf("%d\n", SECOND);
    printf("%d\n", THIRD);
    printf("%d\n", FOURTH);
    printf("%d\n", FIFTH);

    return 0;
}
