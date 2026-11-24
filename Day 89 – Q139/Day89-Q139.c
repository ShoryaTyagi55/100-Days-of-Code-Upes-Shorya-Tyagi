
#include <stdio.h>

// Q139: Demonstrate that enum constants store integer values

enum Fruits {
    APPLE = 1,
    BANANA = 2,
    ORANGE = 3
};

int main() {
    int a = APPLE;
    int b = BANANA;
    int c = ORANGE;

    printf("Apple: %d\n", a);
    printf("Banana: %d\n", b);
    printf("Orange: %d\n", c);

    return 0;
}
