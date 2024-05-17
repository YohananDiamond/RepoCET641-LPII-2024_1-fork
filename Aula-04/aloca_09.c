#include <stdio.h>
#include <stdlib.h>
int* alocaMatriz(int m, int n); // m linhas e n colunas
void desalocaMatriz(int *x);
int elementoMatriz(int *x, int n, int i, int j);
void matrizAleotorio(int *x, int m, int n);
int main(void){
    int *A;
    A = alocaMatriz(10, 10);
    matrizAleotorio(A, 10, 10);
    for(int i = 0; i < 10; i++){   
        for(int j = 0; j < 10; j++){
            printf("A[%d][%d] = %d ", i, j, 
                        elementoMatriz(A, 10, i, j));
        }
        printf("\n");
    }
    desalocaMatriz(A);
    return 0;
}

int elementoMatriz(int *x, int n, int i, int j){
    return x[i*n + j];
}
