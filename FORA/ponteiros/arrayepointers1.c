#include <stdio.h>

// Esse programa vai pegar um array e vai transformar cada número seu em seu dobro.

// A função dobro opera em um número
void dobro(int *num) {
    *num = *num * 2;
}

void dobrar_array(int array[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        dobro(&array[i]);
    }    
}

int main() 
{
    int numeros[4] = {3, 5, 8, 10};
    
    dobrar_array(numeros, 4);

    int i;
    for (i = 0; i < 4; i++) {
        printf("%d\n", numeros[i]);
    }    
    return 0;
}