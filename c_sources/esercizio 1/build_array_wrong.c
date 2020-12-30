#include <stdio.h> 
  
int *buildArray() { 
    int vettore[100]; 
    vettore[0] = 10; 
    return vettore; 
} 
  
int main() {
    int *ptrVettore = buildArray(); 
    printf("%d", ptrVettore[0]); 
    return 0; 
} 
