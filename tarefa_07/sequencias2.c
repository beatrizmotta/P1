#include <stdio.h>
/* 

Lê dois números X e Y (ints). A seguir, mostra uma sequência
de 1 a Y, passando para a próxima linha a cada X números.

*/

void printar_numeros(int x, int y, int num, int counter) {
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
        if (counter != x-1) {
            printf(" ");
        }

        num++;
        counter++;
        printar_numeros(x, y, num, counter);
    }


}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printar_numeros(x, y, 1, 0);

    return 0;
}