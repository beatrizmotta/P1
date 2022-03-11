#include <stdio.h>
#include <string.h>

void ler_matriz(int m, int n, int matriz[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", matriz[i][j]);
            if (j != n - 1) printf(" ");
        }
        printf("\n");
    }
}

void colher(int *coluna, int m, int n, int matriz[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] == 3)
            {
                matriz[i][j] = 0;
                *coluna += 1;
            }

            if (matriz[i][j] == -1)
            {
                matriz[i][j] = 0;
            }
        }
    }
}


void plantar(int *ml, int m, int n, int matriz[m][n])
{
    int linha;
    char caractere;
    
    scanf("%d", &linha);

    for (int j = 0; j < n; j++)
    {
        if (matriz[linha][j] == 0)
        {
            matriz[linha][j] = 1;
            *ml += 2;
        }
    }

    caractere = getchar();
    if (caractere == '\n' || caractere == '\0' || feof(stdin)) return;

    plantar(ml, m, n, matriz);
}


void temporada(int *ml, int m, int n, int matriz[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] == 2 || matriz[i][j] == 1)
            {
                if (matriz[i][j] != 2) *ml += 2;
                matriz[i][j] += 1;
            }
        }
    }
}


void loop(int col, int ml, int m, int n, int matriz[m][n])
{
    char cmd[11];

    if (feof(stdin))
    {
        ler_matriz(m, n, matriz);
        printf("\nForam colhidos %d morangos.\nForam utilizados %dml de inseticida.", col, ml);
        return;
    }

    scanf("%[^\n]", cmd);
    getchar();
    
    if (strcasecmp(cmd, "Colher") == 0) colher(&col, m, n, matriz);

    else if (strcasecmp(cmd, "Plantar") == 0) plantar(&ml, m, n, matriz);

    else if (strcasecmp(cmd, "Temporada") == 0) temporada(&ml, m, n, matriz);

    else if (strcasecmp(cmd, "Ataque") == 0)
    {   
        int i, j;
        scanf("%d %d", &i, &j);
        if (matriz[i][j] != 0) matriz[i][j] = -1;
        getchar();
    }


    loop(col, ml, m, n, matriz);
}


int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);

    int matriz[m][n];
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
            //printf("%d ", matriz[i][j]);
        }
        //printf("\n");
    }
    getchar();
    getchar();
    loop(0, 0, m, n, matriz); 

    return 0;
}