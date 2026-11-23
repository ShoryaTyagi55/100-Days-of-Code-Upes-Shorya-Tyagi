// Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include<stdio.h>

int main() {
    int seconds, hours, minutes, remaining;

    scanf("%d", &seconds);

    hours = seconds / 3600;
    remaining = seconds % 3600;

    minutes = remaining / 60;
    remaining = remaining % 60;

    printf("%d:%d:%d", hours, minutes, remaining);

    return 0;
}