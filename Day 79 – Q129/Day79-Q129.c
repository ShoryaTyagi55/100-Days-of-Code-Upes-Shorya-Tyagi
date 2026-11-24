
#include <stdio.h>

// Q129: Calculate sum and average of integers stored in numbers.txt

int main() {
    FILE *fp = fopen("numbers.txt", "r");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    int num, count = 0, sum = 0;

    while(fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if(count > 0) {
        printf("Sum: %d\n", sum);
        printf("Average: %.2f", (float)sum / count);
    }
    else {
        printf("No numbers found.");
    }

    fclose(fp);

    return 0;
}
