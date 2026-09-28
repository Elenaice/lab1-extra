#include <stdio.h>

int task1(int a, int b, int n){
    int sum = (a * 100 + b) * n;
    int ost = sum % 100;
    return ost;
}

int apples_left(int n, int k) {
    return k % n;
}

int km(int m){
    return m / 1000;
}