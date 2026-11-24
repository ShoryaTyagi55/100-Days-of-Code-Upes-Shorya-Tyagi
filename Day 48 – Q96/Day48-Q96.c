
#include <stdio.h>

int main() {
    // Q96: Reverse each word without changing word order

    char str[300];
    int start = 0, end = 0;

    fgets(str, sizeof(str), stdin);

    while(1) {
        while(str[end] != ' ' && str[end] != '\n' && str[end] != '\0')
            end++;

        for(int i = end - 1; i >= start; i--)
            printf("%c", str[i]);

        if(str[end] == '\0' || str[end] == '\n')
            break;

        printf(" ");

        end++;
        start = end;
    }

    return 0;
}

/*
Input:
Hello World
Output:
olleH dlroW
*/
