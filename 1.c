#include <stdio.h>
#include <assert.h>

int find_answer(int a, int b, int n){
    int sum = (a * 100 + b) * n;
    int ost = sum % 100;
    return ost;
}

int main(){
    assert(find_answer(1,20,3) == 60);
    assert(find_answer(2, 50, 2) == 0);
    assert(find_answer(0, 50, 3) == 50);
    assert(find_answer(0, 0, 3) == 0);
    printf("OK");

    return 0;
}