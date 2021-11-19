#include <stdio.h> 

int viagem_tempo(int ficha1, int ficha2, int ficha3) {
    //Caso onde são usadas 2 fichas iguais
    if ((ficha1 == ficha2) || (ficha1 == ficha3) || (ficha2 == ficha3)) {
        return 0;
    } else {
        //O restante dos casos 
        int dif1;
        if (ficha1 > ficha2) {
            dif1 = ficha1 - ficha2;
        } else {
            dif1 = ficha2 - ficha1;
        }

        int valor_final;
        if (dif1 > ficha3) {
            valor_final = dif1 - ficha3;
        } else {
            valor_final = ficha3 - dif1;
        }

        return valor_final;
    }


}

int main() {
    int x, y, z; 
    scanf("%d %d %d", &x, &y, &z);
    if (viagem_tempo(x, y, z) == 0) {
        printf("S");
    } else {
        printf("N");
    }

    return 0;
}