#include <stdio.h>


void ler_matriz(int linhas, int colunas, int i, char matriz[linhas][colunas]) {
    if (i == linhas) {
        return;
    } else {
        int a;
        for (a = 0; a < colunas; a++) {
            printf("%c", matriz[i][a]);
        }
        printf("\n");
        i++;
        ler_matriz(linhas, colunas, i, matriz);
    }
}

void encher_de_hifen(int l, int c, char matriz[l][c]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = '-';
        }
    }
}

int account(int l, int c, char matriz[3][3], int campeao) {
    int i, j;
        campeao = 0;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if ((matriz[i][j] + matriz[i][j+1] + matriz[i][j+2] == 264) || (matriz[i][j] + matriz[i+1][j] + matriz[i+2][j] == 264)) {
                    campeao = 1;
                    break;
                } else if ((matriz[i][j] + matriz[i][j+1] + matriz[i][j+2] == 237) || (matriz[i][j] + matriz[i+1][j] + matriz[i+2][j] == 237)) {
                    campeao = 2;
                    break;
                } else if (matriz[i][j] + matriz[i+1][j+1] + matriz[i+2][j+2] == 264) {
                    campeao = 1;
                    break;
                } else if (matriz[i][j] + matriz[i+1][j+1] + matriz[i+2][j+2] == 237) {
                    campeao = 2;
                    break;
                }
        }
    }
        
    return campeao;
}

int batalha(int linhas, int cols, char matriz[linhas][cols], int campeao, int venc) {
    if (campeao != 0) {
        printf("%d", venc);
        if (venc == 1) {
            printf("gabrielly venceu essa partida\n");
            ler_matriz(3, 3, 0, matriz);
            return 1;
        } else if (venc == 2) {
            printf("pai venceu essa partida\n");
            ler_matriz(3, 3, 0, matriz);
            return 2;
        } else {
            printf("empate\n");
            ler_matriz(3, 3, 0, matriz);
            return 0;
        }
    } else {
        int coords_g[2];
        int coords_p[2];

        scanf("%d %d", &coords_g[0], &coords_g[1]);
        matriz[coords_g[0]-1][coords_g[1]-1] = 'X';
        
        scanf("%d %d", &coords_p[0], &coords_p[1]);
        matriz[coords_p[0]-1][coords_p[1]-1] = 'O';
        
        int i;
        campeao = 0;
        i = account(3, 3, matriz, campeao);
        
        
        } 
        
            int res1 = 0;
            int res2 = 0;
            int a,b;
            for (a = 0; a < 3; a++) {
                for (b = 0; b < 3; b++) {
                    if (matriz[a][b] == '-') {
                        res1 = 1;
                    }
                    if (matriz[a][b] != '-') {
                        res2 = 1;
                    }
                }
            }
        
        
        
        
            if (res1 == 0 && campeao == 0) {
                campeao = 3;
            }
        
        
            venc = campeao;

        
            batalha(linhas, cols, matriz, campeao, venc);
        
    
    }


void loop(int res, char matriz[3][3], int v_g, int v_p) {
    if (res == 0) {
        if (v_g > v_p) {
            printf("gabrielly foi a grande vencedora desse grande duelo");
        } else if (v_p > v_g) {
            printf("pai foi a grande vencedora desse grande duelo");
        } else if (v_p == v_g) {
            printf("esse grande duelo terminou em empate");
        }
    } else if (res == 1) {
        encher_de_hifen(3, 3, matriz);
        int v = batalha(3, 3, matriz, 0, 0);
        if (v == 1) {
            v_g++;
        } else if (v == 2) {
            v_p++;
        }
        int resposta;
        scanf("%d", &resposta);
        loop(resposta, matriz, v_g, v_p);
    }
    
    
}
int main()
{
    // 88 79
    char jogo[3][3];
    // Preenchendo array
    encher_de_hifen(3, 3, jogo);

    loop(1, jogo, 0, 0);


    return;
}