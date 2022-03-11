#include <stdio.h>

void preencher_array(int tamanho_array, int counter, int array[]) {
    if (tamanho_array == counter) {
        return; 
    } else {
        int num;
        scanf("%d", &num);
        array[counter] = num;
        counter++;
        preencher_array(tamanho_array, counter, array);
    }
}

int procurar_menor(int tamanho_array, int counter, int array[], int menor) {
    if (tamanho_array == counter) {
        return menor;
    } else {
        if (menor >= array[counter]) {
            menor = array[counter];
        } else {
            menor = menor;
        }

        counter++;
        procurar_menor(tamanho_array, counter, array, menor);

    }

}
int procurar_maior(int tamanho_array, int counter, int array[], int maior) {
    if (tamanho_array == counter) {
        return maior;
    } else {
        if (maior <= array[counter]) {
            maior = array[counter];
        } else {
            maior = maior;
        }

        counter++;
        procurar_maior(tamanho_array, counter, array, maior);

    }

}

int main() {
    int array[6];
    preencher_array(6, 0, array);
    procurar_menor(6, 0, array, array[0]);
    printf("%d %d", procurar_menor(6, 0, array, array[0]), procurar_maior(6, 0, array, array[0]));

    return 0;
}