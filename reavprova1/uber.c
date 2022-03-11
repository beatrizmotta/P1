#include <stdio.h>

// FDS - sai com todos - aumento de 10% na tarifa
// 30% do salário para gastar com uber
// Como é dado o preço:
// tarifa = preço fixo + preço por km * km rodados

// Entrada: salario pedro, valor fixo, preço por kilometro, quilometragem a se percorrida, vai viajar no final de semana

// Saída
// Se tiver dinheiro para viajar:
// - Vai poder viajar
// - Valor do Uber, com duas casas
// - O que restou dos 30% para as próximas viagens

// Caso não tenha:
// - Não vai poder viajar
// - Valor que faltou para poder fazer a viagem, com duas casas

void PedroViagem(double salario, double v_fixo, double v_km, double km, int fds) {
    //Calcula os 30% de salário de Pedro
    double gastavel = salario * 0.3;
    double preco_viagem = v_fixo + (v_km * km);

    if (fds) preco_viagem = preco_viagem + (preco_viagem * 0.1);

    double saldo;


    if (preco_viagem <= gastavel) {
        saldo = gastavel - preco_viagem;
        printf("Vai poder viajar\n");
        printf("%.2lf", saldo);
    } else if (preco_viagem > gastavel) {
        saldo = preco_viagem - gastavel;
        printf("Nao vai poder viajar\n");
        printf("%.2lf", saldo);
    }

}

int main()
{
    double salario, v_fixo, v_km, km;
    int fds;
    scanf("%lf %lf %lf %lf %d", &salario, &v_fixo, &v_km, &km, &fds);
    PedroViagem(salario, v_fixo, v_km, km, fds);

    return 0;
}