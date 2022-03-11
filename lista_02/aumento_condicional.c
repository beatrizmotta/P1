#include <stdio.h>

void aumento(double salario_antigo) {
    double salario_novo;
    double percentual;
    double aumento;
    if (salario_antigo <= 280.00) {
        percentual = 0.20;
        aumento = salario_antigo * percentual;
        salario_novo = salario_antigo + (aumento);
    } else if (salario_antigo > 280.00 && salario_antigo < 700) {
        percentual = 0.15;
        aumento = salario_antigo * percentual;
        salario_novo = salario_antigo + (aumento);
    } else if (salario_antigo >= 700.00 && salario_antigo < 1500.00) {
        percentual = 0.10;
        aumento = salario_antigo * percentual;
        salario_novo = salario_antigo + (aumento);
    } else if (salario_antigo >= 1500.00) {
        percentual = 0.05;
        aumento = salario_antigo * percentual;
        salario_novo = salario_antigo + (aumento);
    }
    printf("%.2lf\n%.0lf\n%.2lf\n%.2lf", salario_antigo, (percentual * 100), aumento, salario_novo);
}


int main() 
{
    double salario;
    scanf("%lf", &salario);
    aumento(salario);
    return 0;
}