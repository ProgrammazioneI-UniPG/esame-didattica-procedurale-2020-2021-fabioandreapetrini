#include <stdio.h>

void printSinglePointerMatrix(float *arr, int nr, int nc) {
    for (int i = 0; i < nr; i++) {
        for (int j = 0; j < nc; j++) {
            printf("%.3f \t", *(arr + i * nc + j));
        }  

        printf("\n");
    }
}

float *buildSinglePointerMatrix(float *arr, int nr, int nc) {
    arr = (float *) malloc(nr * nc * sizeof(float));

    int i, j, count = 0, preValue = 0; 
    for (i = 0; i < nr; i++) {
        for (j = 0; j < nc; j++) {
            *(arr + i * nc + j) = (float) count++/125;
        }
    }

    return arr;
}

float *buildDoublePointerMatrix(float **arr, int nr, int nc) {
    arr = (float *) malloc(nr * sizeof(float));
    for (int i = 0; i < nr; i++) {
        arr[i] = malloc(nc * sizeof(float));
    }

    int count = 0;
    for (int i = 0; i < nr; i++) {
        for (int j = 0; j < nc; j++) {
            arr[i][j] = (float) count++/125;
        }
    }

    return arr;
}

void printDoublePointerMatrix(float **arr, int nr, int nc) {

    for (int i = 0; i < nr; i++) {
        for (int j = 0; j < nc; j++) {
            printf("%.3f \t", arr[i][j]);
        }

        printf("\n");
    }
}

void printDoublePointerMatrixByPointerArithmetic(float **arr, int nr, int nc) {

    for (int i = 0; i < nr; i++) {
        for (int j = 0; j < nc; j++) {
            printf("%.3f \t", *(*(arr+i)+j));
        }

        printf("\n");
    }
}

int main(void) {
    int nr = 5;
    int nc = 5;
    float *arr;
    float **doubleArr;
    
    // arr = buildSinglePointerMatrix(arr, nr, nc);
    // printSinglePointerMatrix(arr, nr, nc);
    // free(arr);

    doubleArr = buildDoublePointerMatrix(doubleArr, nr, nc);
    printDoublePointerMatrixByPointerArithmetic(doubleArr, nr, nc);
    printf("\n");
    printDoublePointerMatrix(doubleArr, nr, nc);

    free(doubleArr);
}