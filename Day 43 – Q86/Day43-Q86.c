
#include <stdio.h>

int main() {
    // Q86: Check whether a string is palindrome

    char str[200];
    int len = 0, palindrome = 1;

    scanf("%199s", str);

    while(str[len] != '\0')
        len++;

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}

/*
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/
