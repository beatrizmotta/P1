#include <stdio.h>
/*
    G = R$ 2.50
    A = R$ 1.90
    D = R$ 1.66

*/


double preco(double litros, char combustivel) {
    double preco_litro;
    double preco_final;

    if (combustivel == 'A') {
        preco_litro = 1.90;
        if (litros <= 20) {
            preco_final = preco_litro * litros;
            preco_final = preco_final - (preco_final * 0.03);
            return preco_final;
        } else if (litros > 20) {
            preco_final = preco_litro * litros;
            preco_final = preco_final - (preco_final * 0.05);
            return preco_final;
        }
    } else if (combustivel == 'G') {
        preco_litro = 2.50;
        if (litros <= 20) {
            preco_final = preco_litro * litros;
            preco_final = preco_final - (preco_final * 0.04);
            return preco_final;
        } else if (litros > 20) {
            preco_final = preco_litro * litros;
            preco_final = preco_final - (preco_final * 0.06);
            return preco_final;
        }
    } else if (combustivel == 'D') {
        preco_litro = 1.66;
        if (litros <= 25) {
            preco_final = preco_litro * litros;
            return preco_final;
        } else if (litros > 25) {
            preco_final = preco_litro * litros;
            preco_final = preco_final - (preco_final * 0.04);
            return preco_final;
        }
    }

}




int main()
{
    double gasolina; 
    char tipo_combustivel;

    scanf("%lf %c", &gasolina, &tipo_combustivel);
    printf("R$ %.2lf", preco(gasolina, tipo_combustivel));

    return 0; 
}