
#include <stdio.h>

int main() {
    // Q99: Convert dd/04/yyyy to dd-Apr-yyyy

    char date[20];

    scanf("%19s", date);

    for(int i = 0; i < 2; i++)
        printf("%c", date[i]);

    printf("-Apr-");

    for(int i = 6; date[i] != '\0'; i++)
        printf("%c", date[i]);

    return 0;
}

/*
Input:
25/04/2026
Output:
25-Apr-2026
*/
