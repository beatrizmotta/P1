#include <stdio.h>

double aumento(double salario) {
    double acrescimo;
    if (salario > 500) {
        acrescimo = salario * 0.1;
    } else if (salario > 300 && salario <= 500) {
        acrescimo = salario * 0.07;
    } else {
        acrescimo = salario * 0.05;
    }
    return salario + acrescimo;
}

int main() {
    double salario;
    scanf("%lf", &salario);
    printf("%.2lf", aumento(salario));
    return 0;
}