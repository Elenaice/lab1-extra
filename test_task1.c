#include <assert.h>
#include <stdio.h>

int find_answer(int a, int b, int n);

int main(void) {

    assert(find_answer(1,20,3) == 60);
    assert(find_answer(2, 50, 2) == 0);
    assert(find_answer(0, 50, 3) == 50);
    assert(find_answer(0, 0, 3) == 0);
    assert(find_answer(2,40,2) == 80);
    assert(find_answer(3, 0, 4) == 0);

    printf("Succesfully!\n");

    return 0;
}