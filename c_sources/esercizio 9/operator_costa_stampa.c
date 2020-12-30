#include <stdio.h>

int main() {
    int i = 0xF - 5;
    for(; i < 0x10; i++) {
        printf("%d\n", i);
    }

    printf("%d\n", !i ^ 33);
}
