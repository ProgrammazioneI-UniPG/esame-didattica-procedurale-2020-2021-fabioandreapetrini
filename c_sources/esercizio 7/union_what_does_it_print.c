#include <stdio.h>

union u {
    char s[10];
    int n;
};

int main() {
    union u x;
    strncpy(x.s, "test", 2);
    printf("%d\n", x.n);
}
