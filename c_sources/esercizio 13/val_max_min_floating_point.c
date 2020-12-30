#include <stdio.h>
#include <float.h>
int main(void)
{
    printf("Codifica del tipo FLOAT \n ");
    printf("Valore minimo = %e \n", FLT_MIN);
    printf("Valore massimo = %e \n", FLT_MAX);

    printf("Codifica del tipo DOUBLE \n ");
    printf("Valore minimo = %e \n", DBL_MIN);
    printf("Valore massimo = %e \n", DBL_MAX);

    printf("Codifica del tipo LONG DOUBLE \n ");
    printf("Valore minimo = %Le \n", LDBL_MIN);
    printf("Valore massimo = %Le \n", LDBL_MAX);
}
