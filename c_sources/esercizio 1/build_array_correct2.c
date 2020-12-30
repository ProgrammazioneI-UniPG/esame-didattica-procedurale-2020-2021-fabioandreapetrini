#include <stdio.h> 
int *ptrV;
  
int *buildArray(int *ptrV) { 
    ptrV = malloc(100 * sizeof(int));
    ptrV[0] = 10;
    return ptrV;
} 
  
int main() {
    int *p = buildArray(&ptrV[0]); 
    printf("%d", *p); 
    return 0; 
} 
