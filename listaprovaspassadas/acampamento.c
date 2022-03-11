/*
    Dividir os dormitórios de acordo com a altura dos visititantes,
    de modo que nunca hajam duas pessoas com diferença de 1 cm de altura
    no mesmo dormitário

    Saída = informar a quantidade mínima de dormitórios diferentes
    para alocar os visitantes de acordo com a regra proposta.

    Obs: todos têm alturas diferentes

    Entrada = 5 inteiros com tamanho 1 <= x <= 1000, dados em centimetors
*/

#include <stdio.h>


int quantosdormitorios(int h1, int h2, int h3, int h4, int h5) {
    int quantidade = 1;
  
    quantidade += ((h1 - h2) == 1 ||(h1 - h2) == -1) ? 1 : 0;
    quantidade += ((h1 - h3) == 1 ||(h1 - h3) == -1) ? 1 : 0;
    quantidade += ((h1 - h4) == 1 ||(h1 - h4) == -1) ? 1 : 0;
    quantidade += ((h1 - h5) == 1 ||(h1 - h5) == -1) ? 1 : 0;

    quantidade += ((h2 - h1) == 1 ||(h2 - h1) == -1) ? 1 : 0;
    quantidade += ((h2 - h3) == 1 ||(h2 - h3) == -1) ? 1 : 0;
    quantidade += ((h2 - h4) == 1 ||(h2 - h4) == -1) ? 1 : 0;
    quantidade += ((h2 - h5) == 1 ||(h2 - h5) == -1) ? 1 : 0;

    quantidade += ((h3 - h1) == 1 ||(h3 - h1) == -1) ? 1 : 0;
    quantidade += ((h3 - h2) == 1 ||(h3 - h2) == -1) ? 1 : 0;
    quantidade += ((h3 - h4) == 1 ||(h3 - h4) == -1) ? 1 : 0;
    quantidade += ((h3 - h5) == 1 ||(h3 - h5) == -1) ? 1 : 0;

    quantidade += ((h4 - h1) == 1 ||(h4 - h1) == -1) ? 1 : 0;
    quantidade += ((h4 - h3) == 1 ||(h4 - h3) == -1) ? 1 : 0;
    quantidade += ((h4 - h2) == 1 ||(h4 - h2) == -1) ? 1 : 0;
    quantidade += ((h4 - h5) == 1 ||(h4 - h5) == -1) ? 1 : 0;

    quantidade += ((h5 - h1) == 1 ||(h5 - h1) == -1) ? 1 : 0;
    quantidade += ((h5 - h3) == 1 ||(h5 - h3) == -1) ? 1 : 0;
    quantidade += ((h5 - h4) == 1 ||(h5 - h4) == -1) ? 1 : 0;
    quantidade += ((h5 - h2) == 1 ||(h5 - h2) == -1) ? 1 : 0;

    if (quantidade > 2) {
        quantidade = 2;
    }

    return quantidade;

}
    
int main() 
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("%d", quantosdormitorios(a, b, c, d, e));
    return 0;
}

