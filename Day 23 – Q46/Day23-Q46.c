
/* Q46: Print 5 rows of 5 stars
Output:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
