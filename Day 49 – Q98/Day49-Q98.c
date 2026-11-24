
#include <stdio.h>

int main() {
    // Q98: Print initials with surname displayed in full

    char name[200];
    int i = 0, last = 0;

    fgets(name, sizeof(name), stdin);

    while(name[i] != '\0' && name[i] != '\n') {
        if(name[i] == ' ' && name[i + 1] != ' ')
            printf("%c. ", name[i + 1]);

        if(name[i] != ' ')
            last = i;

        i++;
    }

    i = last;

    while(i >= 0 && name[i] != ' ')
        i--;

    printf("%s", name + i + 1);

    return 0;
}

/*
Input:
Shorya Tyagi
Output:
S. Tyagi
*/
