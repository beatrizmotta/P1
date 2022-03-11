#include <stdio.h>


int get_tamanho(char array[], int counter, int tamanho) {
    if (array[counter] == '\0') {
        return (tamanho - 1);
    } else {
        counter++;
        tamanho++;
        get_tamanho(array, counter, tamanho);
    }
}

void inverter(char array[], char array_inv[], int tamanho, int counter1, int counter2) {
    if (counter1 == tamanho) {
        return;
    } else {
        array_inv[counter1] = array[counter2];
        counter1++;
        counter2--;
        inverter(array, array_inv, tamanho, counter1, counter2);
    }
}

void ler(char array[], int tamanho, int counter) {
    if (counter == tamanho) {
        return; 
    } else {
        printf("%c", array[counter]);
        counter++;
        ler(array, tamanho, counter);
    }
} 


int main()
{
    char texto[255];
    fgets(texto, 255, stdin);

    int tamanho = get_tamanho(texto, 0, 0);
    char texto_invertido[tamanho];

    inverter(texto, texto_invertido, tamanho, 0, tamanho-1);
    ler(texto_invertido, tamanho, 0);


    return 0;
}