#include <assert.h>
#include <stdio.h>

int task1(int a, int b, int n);

int main(void) {

    assert(task1(1,20,3) == 60);
    assert(task1(2, 50, 2) == 0);
    assert(task1(0, 50, 3) == 50);
    assert(task1(0, 0, 3) == 0);
    assert(task1(2,40,2) == 80);
    assert(task1(3, 0, 4) == 0);

    printf("Succesfully!\n");

    return 0;
}