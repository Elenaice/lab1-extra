#include <stdio.h>

int apples_left(int n, int k) {
    return k % n;
}

int main(void) {
    int n, k;

    scanf("%d", &n);
    scanf("%d", &k);

    printf("%d\n", apples_left(n, k));

    return 0;
}
