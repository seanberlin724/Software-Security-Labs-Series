#include <stdio.h>

int multiply_by_two(int a, int b) {
    return (a * 2) + (b * 2);
}

int main() {
    int p = 3;
    int q = 4;
    int r = multiply_by_two(p, q);
    printf("Result: %d\n", r);
    return 0;
}
