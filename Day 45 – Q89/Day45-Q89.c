
#include <stdio.h>

int main() {
    // Q89: Count frequency of a given character

    char str[200], ch;
    int count = 0;

    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    printf("%d", count);

    return 0;
}

/*
Input:
banana
a
Output:
3
*/
