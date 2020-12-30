#include <stdio.h>

void swap(int a, int b) {
    int tmp; 
    tmp = a; 
    a = b; 
    b = tmp;
}

void sumValue(int x, int *pc) {
    *pc = x + 10;
}

int main() {
    int a = 1, b = 5, *pc = &b;
    swap(a, b); 
    sumValue(a, pc);
    printf("%d", b);

    return 0;
}
