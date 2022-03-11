#include <stdio.h>
#include <string.h>
/*
Encontrar não só uma uma letra, mas uma palavra na matriz
de inteiros que será dada. 
Cada inteiro corresponde a um char na tabela ASCII.

As palavras poderam estar na vertical ou na horizontal!

Entrada:
- Um valor correspondente ao tamanho da palavra.
- A palavra com todoas as letras maiúsculas.
- A quantidade de linhas e colunas da matriz.
- A matriz com os números inteiros

Ex:
4
AMOR 
4 4 
81 86 84 83
77 70 69 86
81 87 81 69
69 65 71 71

Ideia:
A B C D
E F G H
I J K L
Palavra tem 3 letras.
A
cima -> linha - 2 < 0
direita -> coluna + 2 > 3
esquerda -> coluna - 2 < 0
baixo -> linha + 2 > 3

B C D, B F G
C G K
D H L

Saída:
- Duas linhas, a primeira com a localização da casa onde
a palavra começa e a segunda com a localização de onde a 
palavra termina.

*/

void preencher_matriz(int linhas, int colunas, int i, int matriz[linhas][colunas], int t_palavra) {

    if (i == linhas) {
        return;
    } else {
        // i = 0
        int valor;
        int a;

        for (a = 0; a < colunas; a++)
        {
            scanf("%d", &valor);
            matriz[i][a] = valor;
        }

        i++;
        preencher_matriz(linhas, colunas, i, matriz);
    }

}

void num_to_letter(int array[], int counter, char palavra[]) {
    if (palavra[counter] == '\0') {
        return;
    } else {
        array[counter] = (int) palavra[counter];
        counter++;
        num_to_letter(array, counter, palavra);
    }
}

void achar(int linhas, int colunas, int i, int j, int matriz[linhas][colunas], int palavra[], int t_palavra) {
    if (i == linhas) {
        return [1, 2];
    } else {
        if (j == colunas) {
            j = 0;
            i++;
        }

        int palavra[t_palavra];
        int a;
        int remain = t_palavra - 1;

        /*
        
        Nossa função vai percorrer toda célula do vetor. O que queremos fazer?
        - Queremos olhar as letras à direita e abaixo de cada célula, parando no 
          tamanho da palavra.
        - Exemplo, na célula A1 de uma matriz 5x5 de uma palavra de 3 letras (BIA), vamos querer
        olhar as duas células (3 - 1) para direita e para baixo. 
        A1 B1 C1, A1 A2 A3
        O que fazemos depois disso?
        - Verificamos a compatibilidade dessa 





        
        
        */





        j++;
    }



}

int main() {
    // Pegar palavra e tamanho
    int t_palavra;
    char palavra[100];
    scanf("%d", &t_palavra);
    scanf("%s", palavra);

    // Array para saber reconhecer qual é a palavra certa
    int palavra_em_int[strlen(palavra)];
    num_to_letter(palavra_em_int, 0, palavra);

    // Criando matriz   
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];
    preencher_matriz(linhas, colunas, 0, matriz);



    return 0;
}