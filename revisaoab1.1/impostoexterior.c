#include <stdio.h>
/*

Até 500 reais = não paga imposto
Para mais de 500, deve-se pagar um imposto de 50% do valor que exceder os 500 dólares. 

*/

double imposto(double gastos) {
    if (gastos > 500) {
        double excedido = (float) gastos - 500;
        double imposto = 0.5 * excedido; 
        return imposto; 
    } else {
        return 0; 
    }
}


int main() {    
    double gastos; 
    scanf("%lf", &gastos);
    printf("O valor a ser pago é: %.2lf\n", imposto(gastos));
    return 0; 
}