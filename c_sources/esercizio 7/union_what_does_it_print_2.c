#include <stdio.h>

struct test {
    static int var;
};

int main() {
    printf("%d", sizeof(struct test));
}