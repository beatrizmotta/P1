#include <stdio.h>

/*
* Determinar qual é o valor mensal da parcela do empréstimo que o banco pode autorizar.
* Precisa: 
* - Valor do salário
* - Quanto do salário já está compormetida com outros empréstimos
* Máximo de % do salário que pode estar envolvido = 30%
*/

double parcela_emprestimo(double salario, double v_comprometido) {
    double limite = salario * 0.3;
    double parcela; 
    if (v_comprometido < limite) {
        parcela = limite - v_comprometido;
    } else {
        parcela = 0.00; 
    }
    return parcela; 
}


int main() {
    double salario, v_comprometido;
    scanf("%lf %lf", &salario, &v_comprometido);
    printf("%.2lf", parcela_emprestimo(salario, v_comprometido));
    return 0;
}