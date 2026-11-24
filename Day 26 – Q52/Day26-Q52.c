
#include <stdio.h>

int main() {
    // Q52: Print stars with irregular spacing

    int count[] = {1, 3, 5, 3, 1};

    for(int i = 0; i < 5; i++) {
        for(int j = 1; j <= count[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
