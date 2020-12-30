#include <stdio.h>
static int *d = NULL;

int f(int *a, int b) {
    d = &b;
    return (--(*a) * b++ + ++(*d));
}

int main(void) {
    static int a = -2, b = 2;
    b = f(&a, b);

    printf("%d\n%d\n%d", b, a, *d);
}
