
#include <stdio.h>

// Q138: Display enum names and their integer values

enum Colors {
    RED, GREEN, BLUE, YELLOW
};

int main() {
    char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    for(int i = RED; i <= YELLOW; i++)
        printf("%s = %d\n", names[i], i);

    return 0;
}
