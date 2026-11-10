#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, m;
    int s = 0;
    int k = 1;      

    printf("Enter m (start) and n (end): ");
    scanf("%d %d", &m, &n);

    for (int i = m; i >= n; i--) {

        s += i;
        printf("done %d times (current i = %d)\n", k++, i);
    }

    printf("result %d\n", s);

    return 0;
}
