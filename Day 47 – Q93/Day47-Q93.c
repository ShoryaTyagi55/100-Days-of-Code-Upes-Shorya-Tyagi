
#include <stdio.h>

int main() {
    // Q93: Check whether two strings are anagrams

    char a[100], b[100];
    int count[256] = {0}, anagram = 1;

    scanf("%99s %99s", a, b);

    for(int i = 0; a[i] != '\0'; i++)
        count[(unsigned char)a[i]]++;

    for(int i = 0; b[i] != '\0'; i++)
        count[(unsigned char)b[i]]--;

    for(int i = 0; i < 256; i++) {
        if(count[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if(anagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}

/*
Input 1:
listen silent
Output 1:
Anagrams

Input 2:
hello world
Output 2:
Not anagrams
*/
