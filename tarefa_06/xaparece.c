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

int frequencia(int n_procurado, int tamanho_array, int counter, int acumulador, int array[]) {
    if (tamanho_array == counter) {
        return acumulador;
    } else {
        if (array[counter] == n_procurado) {
            acumulador++;
        }
        counter++;
        frequencia(n_procurado, tamanho_array, counter, acumulador, array);
    }
}

int main() {
    int array[10];
    int procurar;
    
    preencher_array(10, 0, array);
    scanf("%d", &procurar);

    int freq = frequencia(procurar, 10, 0, 0, array);
    printf("%d", freq);

    return 0;
}