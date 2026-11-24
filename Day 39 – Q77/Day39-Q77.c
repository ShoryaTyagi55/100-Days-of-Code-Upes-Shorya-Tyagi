
#include <stdio.h>

int main() {
    // Q77: Check if main diagonal elements are distinct

    int n, a[10][10], distinct = 1;

    scanf("%d %d", &n, &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i][i] == a[j][j])
                distinct = 0;
        }
    }

    if(distinct)
        printf("True");
    else
        printf("False");

    return 0;
}

/*
Input 1:
3 3 1 2 3 4 5 6 7 8 1
Output 1:
False

Input 2:
3 3 1 2 3 4 5 6 7 8 9
Output 2:
True
*/
