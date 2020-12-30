#include <stdio.h>

int main() {
    int a = 2, *pa = &a, b = 0;

    // if ((4>5 && 5>4 || !(3, 2, 1, 0)) && !!!0) {
    //     printf("True\n");
    // } else {
    //     printf("False\n");
    // }

    // if ((a--, --a, *pa)) {
    //     printf("True\n");
    // } else {
    //     printf("False\n");
    // }

    // if (a == pa) {
    //     printf("True\n");
    // } else {
    //     printf("False\n");
    // }

    if ((!a ? 0 : 1) && !b) {
        printf("True\n");
    } else {
        printf("False\n");
    }
}
