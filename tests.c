#include <assert.h>

int apples_left(int n, int k);

int main(void) {
    assert(apples_left(3, 10) == 1);
    assert(apples_left(5, 17) == 2);
    assert(apples_left(4, 20) == 0);

    return 0;
}
