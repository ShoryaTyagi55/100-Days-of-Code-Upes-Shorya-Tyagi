
#include <stdio.h>

int main() {
    // Q88: Replace spaces with hyphens

    char str[200];

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }

    printf("%s", str);

    return 0;
}

/*
Input:
Hello World C
Output:
Hello-World-C
*/
