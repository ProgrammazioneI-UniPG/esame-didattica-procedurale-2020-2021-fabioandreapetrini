#include <stdio.h>
int main(void) {
    char s[] = "stampa la stringa";
    for (char *ptr = s; *ptr != '\0'; ++ptr) {
        printf("%c", *ptr);
    }
}