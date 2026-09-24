#include <stdio.h>

int main(void) {
    int n, k;

    scanf("%d", &n);
    scanf("%d", &k);

    printf("%d\n", k % n);

    return 0;
}