
#include <stdio.h>

int main() {
    // Q63: Merge two arrays and remove duplicates

    int n, m, a[100], b[100], c[200], k = 0, duplicate;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for(int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for(int i = 0; i < n; i++) {
        duplicate = 0;

        for(int j = 0; j < k; j++)
            if(c[j] == a[i])
                duplicate = 1;

        if(!duplicate)
            c[k++] = a[i];
    }

    for(int i = 0; i < m; i++) {
        duplicate = 0;

        for(int j = 0; j < k; j++)
            if(c[j] == b[i])
                duplicate = 1;

        if(!duplicate)
            c[k++] = b[i];
    }

    for(int i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}

/*
Input 1:
3 1 2 3 2 4 5
Output 1:
1 2 3 4 5
*/
