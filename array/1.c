#include <stdio.h>

void preencherArray(int array[], int tamanho, int i) {
    if (i == tamanho) {
        return;
    } else {
        int num;
        scanf("%d", &num);
        array[i] = num;
        i = i + 1; 
        preencherArray(array, tamanho, i);
    }
}

int lerArray(int array[], int num_ultimo, int tamanho, int i, int contador) {
    if (i == tamanho - 1) {
        return contador;
    } else {
        if (array[i] == num_ultimo) {
            contador = contador + 1; 
        }
        i = i + 1; 
        lerArray(array, num_ultimo, tamanho, i, contador);
    }
}


int main() {
    int tamanho;
    scanf("%d", &tamanho);
    int array[tamanho];
    preencherArray(array, tamanho, 0);
    printf("O numero %d apareceu %d vezes.", array[tamanho-1], lerArray(array, array[tamanho-1], tamanho, 0, 0));

    return 0;
}