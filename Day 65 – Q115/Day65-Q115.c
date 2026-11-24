
#include <stdio.h>

// Q115: Check whether two strings are anagrams

int main() {
    char a[100], b[100];
    int count[26] = {0};

    scanf("%99s %99s", a, b);

    for(int i = 0; a[i] != '\0'; i++)
        count[a[i] - 'a']++;

    for(int i = 0; b[i] != '\0'; i++)
        count[b[i] - 'a']--;

    int flag = 1;

    for(int i = 0; i < 26; i++) {
        if(count[i] != 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
