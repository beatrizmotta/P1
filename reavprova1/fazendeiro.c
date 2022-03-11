/*
Sempre planta de fileira em fileira, mas nunca planta menos de uma
Os morangos só estão maduros na 3 temporada, e é aí que os colhe

Na primeira e segunda eles precisam de inseticida.

Nem sempre usa seu terreno todo.

0 - não tem morango
1 e 2 - morangos novos
3 - morango pronto para ser colhido
-1 - morango estragado

A cada vez que passa de 1 para 2 ou a cada vez que são
plantados, os morangos devem ser pulverizados (gastam 2ml cada)

Entrada:
- N e M - dimensões da array
- Matriz de fato com o estado atual
- Vários comandos
    - Plantar: seguido de inteiros correspondentes as linahs que 
    serão plantadas
    - Temporada: indica passagem do tempo
    - Colher: todos os morangos prontos são colhidos
    - Ataque: K W indicando a posição onde foi atacado por uma praga

Exemplo:
*/

#include <stdio.h>
#include <string.h>

void preencher_matriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    int i, j;
    int num;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &num);
            matriz[i][j] = num;
        }
    }
}

void ler_matriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];

    preencher_matriz(linhas, colunas, matriz);

    char acao[30];
    int i, j;
    int avancar = 0;
    while (scanf("%s ", acao) != EOF)
    {
        if (strcmp(acao, "Plantar") == 0) {
            int fileira;
            scanf("%d", &fileira);
            printf("%d", fileira);
            for (j = 0; j < colunas; j++) {
                    matriz[fileira][j] = 1;
                }
            if (avancar == 1) {
                for (i = 0; i < linhas; i++) {
                    for (j = 0; j < colunas; j++) {
                        if (matriz[i][j] != 0 || matriz[i][j] != -1) {
                            matriz[i][j] = (matriz[i][j] + 1);
                        }
                    }
                }

            }

            
            avancar = 1;
        } else if (strcmp(acao, "Colher") == 0) {
            if (avancar == 1) {

                for (i = 0; i < linhas; i++) {
                    for (j = 0; j < colunas; j++) {
                        if (matriz[i][j] != 0 || matriz[i][j] != -1) {
                            matriz[i][j] = (matriz[i][j] + 1);
                        }
                    }
                }

            }

            avancar = 0;
        } else if (strcmp(acao, "Temporada") == 0) {
            avancar = 1;
            if (avancar == 1) {

                for (i = 0; i < linhas; i++) {
                    for (j = 0; j < colunas; j++) {
                        if (matriz[i][j] != 0 || matriz[i][j] != -1) {
                            matriz[i][j] = (matriz[i][j] + 1);
                        }
                    }
                }

            }

        }
    }
    
    ler_matriz(linhas, colunas, matriz);


    return 0;
}