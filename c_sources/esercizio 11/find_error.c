#include <stdio.h>
int main(void) {
    char s[] = "stampa la stringa";
    for (; *s != '\0'; ++s) {
        printf("%c", *s);
    }
}