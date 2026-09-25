#include <stdio.h>
#include <assert.h>

int find_answer(int a, int b, int n){
    int sum = (a * 100 + b) * n;
    int ost = sum % 100;
    return ost;
}
