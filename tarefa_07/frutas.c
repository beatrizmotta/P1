#include <stdio.h>
/*
Dona Marta quer ajuda para:
- Calcular o consumo de frutas na sua casa e o valor gasto
por dia nessas frutas.

Para fazer isso, sua filha vai fazer um programa a partir de
uma tabela que sua mãe usava para anotações por quase um ano.

Nessa tabela, Dona Marta anotou a quantidade de dias e, em seguida,
o dinheiro gasto a cada dia com estas frutas.
Considere que cada fruta pesa 1kg.

Entrada:
Você vai receber um número N que corresponde ao n de testes.
0 < N < 20
Para cada teste, você receberá duas linhas. A primeria contem
um float V indicando o tanto gasto, a segunda linha contém o nome
de cada fruta que Dona Marta comprou, separados por espaços. 

Saída: 
Imprimir, por dia, quantos quilos de frutas Dona Marta comprou
a cada dia. O consumo médio em kg por dia com 2 números decimais e
a média de dinheiro gasto por dia.
\n no final.
*/

int quantas_frutas(char frutas[], int counter, int quantos_espacos) {
    if (frutas[counter] == '\0') {
        return quantos_espacos; 
    } else {
        if (frutas[counter] == ' ') {
            quantos_espacos++;
        }
        counter++;
        quantas_frutas(frutas, counter, quantos_espacos);
    }    
}

void dona_marta(int kilos, int valor, int qtd_frutas, int n_testes, int counter) {
    if (counter == n_testes) {
        float media_kg = kilos/counter;
        float media_valor = valor/counter;

        printf("%.2f kg por dia\n", media_kg, kilos);
        printf("R$ %.2f por dia\n", media_valor);

        return; 
    } else {
        char frutas[100];
        float preco; 
        scanf("%f", &preco);
        fgets(frutas, 100, stdin);

        int qt_frutas = quantas_frutas(frutas, 0, 0);
        int kg = 1 * qt_frutas; 
        printf("dia %d: %d kg\n", counter+1, qt_frutas);

        kilos = kilos + kg;
        valor = valor + preco;
        qtd_frutas = qtd_frutas + qt_frutas;
        counter++;
        dona_marta(kilos, valor, qtd_frutas, n_testes, counter);

    }
}

int main() {
    int dias;
    scanf("%d", &dias);

    dona_marta(0, 0, 0, dias, 0);

    return 0;
}