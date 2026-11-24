
#include <stdio.h>

int main() {
    // Q97: Print initials of a name

    char name[200];

    fgets(name, sizeof(name), stdin);

    for(int i = 0; name[i] != '\0'; i++) {
        if(i == 0 && name[i] != ' ')
            printf("%c.", name[i]);
        else if(name[i] == ' ' && name[i + 1] != ' ' &&
                name[i + 1] != '\0' && name[i + 1] != '\n')
            printf("%c.", name[i + 1]);
    }

    return 0;
}

/*
Input:
Shorya Tyagi
Output:
S.T.
*/
