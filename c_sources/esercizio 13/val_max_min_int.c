#include <stdio.h>
#include <limits.h>
int main(void)
{

    printf("Codifica del tipo SHORT \n");
    printf("Valore minimo = %d \n", SHRT_MIN);
    printf("Valore massimo = %d \n", SHRT_MAX);
    printf("Codifica del tipo INT \n");
    printf("Valore minimo = %d \n", INT_MIN);
    printf("Valore massimo = %d \n", INT_MAX);
    printf("Codifica del tipo LONG INT \n");
    printf("Valore minimo = %ld \n", LONG_MIN);
    printf("Valore massimo =%ld \n", LONG_MAX);
    printf("Codifica del tipo UNSIGNED SHORT \n");
    printf("Valore minimo = 0 \n");
    printf("Valore massimo = %u \n", USHRT_MAX);

    printf("Codifica del tipo UNSIGNED INT \n");
    printf("Valore minimo = 0 \n");
    printf("Valore massimo = %u \n", UINT_MAX);

    printf("Codifica del tipo UNSIGNED LONG INT \n");
    printf("Valore minimo = 0 \n");
    printf("Valore massimo = %lu \n", ULONG_MAX);
}
