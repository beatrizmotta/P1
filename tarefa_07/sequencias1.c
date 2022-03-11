#include <stdio.h>

/*
O programa lê X, Y e Z (X < Y e Z >= 1) e exibe a sequênia de 1 a Y,
com valores incrementando sempre Z, passando para a próxima linha a cada X números serem impressos
*/

void printar_numeros(int x, int y, int z, int num, int counter) {
    if (num >= y) {
        if (counter == x) {
            printf("\n");
        }
        if (num == y) {
            printf("%d", num);
        }
        return;
    } else {
        if (counter == x) {
            printf("\n");
            counter = 0;
        }
        printf("%d", num);
        if (counter != x) {
            printf(" ");
        }

        num = num + z;
        counter++;
        printar_numeros(x, y, z, num, counter);
    }


}


int main()
{   
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printar_numeros(x, y, z, 1, 0);
    return 0;
}