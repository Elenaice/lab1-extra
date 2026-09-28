#include <stdio.h>

int apples_left(int n, int k) {
    return k % n;
}

int find_answer(int a, int b, int n){
    int sum = (a * 100 + b) * n;
    int ost = sum % 100;
    return ost;
}

int main(void) {
    int n, k;

    scanf("%d", &n);
    scanf("%d", &k);

    printf("%d\n", apples_left(n, k));

    return 0;
}
