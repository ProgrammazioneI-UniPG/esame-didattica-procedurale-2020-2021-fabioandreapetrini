#include <stdio.h> 
  
void fillArray(int *ptrVettore) { 
    ptrVettore[0] = 10; 
} 
  
int main() {
    int vettore[100];  
    fillArray(vettore); 
    printf("%d", vettore[0]); 
    return 0; 
} 
