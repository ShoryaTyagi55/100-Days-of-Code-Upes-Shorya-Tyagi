
#include <stdio.h>

int main() {
    // Q90: Toggle uppercase and lowercase characters

    char str[200];

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    printf("%s", str);

    return 0;
}

/*
Input:
Hello World
Output:
hELLO wORLD
*/
