/*

Alguns professores decidiram adquirir uma cafeteira.

- Ela usa cápsulas de vário sabores pra peparar o café.
- Cada capsula = duas xícaras

- As caixas são vendidas em pequenas (10 unidades) ou grandes
(16 unidades).

- Cada professor faz a doação de quantas caixas quiser.

Programa:
- Recebe como entrada a quantidade e o tamanho das caixas doadas
por cada um dos sete professores.
- Exibe a quantidade total e cápsulas doadas e quantas xícaras cada
professor poderá beber.



*/

#include <stdio.h>

int cafe(int num, int acumulo) {
    int n = num;
    int ac = acumulo;

    if (n == 0) {
        return ac;
    }
    int quantidade;
    char tamanho;
    int total;
    
    scanf("%d %c", &quantidade, &tamanho);
    
    if (tamanho == 'P' || tamanho == 'p') {
        total = quantidade * 10;
    } else if (tamanho == 'g' || tamanho == 'G') {
        total = quantidade * 16;
    }

    ac = ac + total;

    n--;
    cafe(n, ac);
}


int main()
{
    int doacoes = cafe(7, 0);
    printf("%d", doacoes);

    int xic_por_professor = (doacoes / 7) * 2;    
    printf("%d", xic_por_professor);

    return 0; 
}