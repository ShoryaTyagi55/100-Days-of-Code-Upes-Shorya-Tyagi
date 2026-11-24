
#include <stdio.h>

int main() {
    // Q87: Count spaces, digits and special characters

    char str[200];
    int spaces = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] == ' ')
            spaces++;
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else if(!((str[i] >= 'a' && str[i] <= 'z') ||
                  (str[i] >= 'A' && str[i] <= 'Z')))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d",
           spaces, digits, special);

    return 0;
}

/*
Input:
Hello 123!
Output:
Spaces=1, Digits=3, Special=1
*/
