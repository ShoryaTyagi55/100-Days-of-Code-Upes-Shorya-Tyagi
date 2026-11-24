
#include <stdio.h>

int main() {
    // Q92: Find the first repeating lowercase alphabet

    char str[200];
    int count[26] = {0};

    scanf("%199s", str);

    for(int i = 0; str[i] != '\0'; i++)
        count[str[i] - 'a']++;

    for(int i = 0; str[i] != '\0'; i++) {
        if(count[str[i] - 'a'] > 1) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}

/*
Input:
abccba
Output:
a
*/
