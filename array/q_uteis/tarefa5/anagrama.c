#include <stdio.h>
#include <ctype.h>


int tamanho_texto(int counter, char frase[]) {
    if (frase[counter] != '\0') {
        counter++; 
        tamanho_texto(counter, frase);
    } else {
        return counter; 
    }
}

void igualando(char frase[], int counter) {
    if (frase[counter] != '\0') {
        frase[counter] = toupper(frase[counter]);
        counter++;
        igualando(frase, counter);
    } else {
        return;
    }
}

void ler(int tamanho, int counter, char arr[]) {
    if (tamanho == counter) {
        return;
    } else {
        printf("%d\n", arr[counter]);
        counter++;
        ler(tamanho, counter, arr);
    }
}

int main() {
    int TAM_MAX = 100; 
    char frase1[TAM_MAX];
    char frase2[TAM_MAX];
    
    fgets(frase1, TAM_MAX, stdin);

    int tamanho_frase = tamanho_texto(0, frase1);
    igualando(frase1, 0);
    ler(tamanho_frase, 0, frase1);

    return 0; 
}