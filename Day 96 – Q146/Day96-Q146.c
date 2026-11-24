
#include <stdio.h>

// Q146: Create Employee structure with nested Date structure

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee e;

    scanf("%49s %d %d %d %d",
          e.name, &e.id,
          &e.joiningDate.day,
          &e.joiningDate.month,
          &e.joiningDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d",
           e.name, e.id,
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}
