// Q18 Write a program to accept a percentage and assign a grade based on the given criteria.

/*
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F
*/

#include<stdio.h>

int main() {
    int percentage;

    scanf("%d", &percentage);

    if(percentage >= 90 && percentage <= 100) {
        printf("Grade A");
    }
    else if(percentage >= 80) {
        printf("Grade B");
    }
    else if(percentage >= 70) {
        printf("Grade C");
    }
    else if(percentage >= 60) {
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }

    return 0;
}