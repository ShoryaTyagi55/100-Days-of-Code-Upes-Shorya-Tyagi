
#include <stdio.h>
#include <string.h>

// Q114: Find the length of the longest substring without repeating characters

int main() {
    char str[200];

    scanf("%199s", str);

    int maxLength = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        int visited[256] = {0};
        int length = 0;

        for(int j = i; str[j] != '\0'; j++) {
            if(visited[(unsigned char)str[j]])
                break;

            visited[(unsigned char)str[j]] = 1;
            length++;
        }

        if(length > maxLength)
            maxLength = length;
    }

    printf("%d", maxLength);

    return 0;
}
