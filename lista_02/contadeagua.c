#include <stdio.h>
/**
 * SBC quer insentivar de maneira que as pessoas que gastarem menos água pagem menos por metro cúbico.
 * TODOS pagam mensalmente uma assinatura de 7 reais, que dá direito a 10m3 de água (qualquer consumo
 * entre 0 e 10m3, ele ainda paga se não gastar nada). 
 * Acima de 10m3, cada metro cúbico vai valer um valor diferente. 
 * A SBC cobra apenas por quantidades inteiras de metros cúbicos. 
 * 
*/

int conta(int consumo) 
{
    int total;
    int consumo_base = 7;
    int diferenca;

    if (consumo >= 0 && consumo <= 10) {
        total = consumo_base;
    } else if (consumo >= 11 && consumo <= 30) {
        
        diferenca = consumo - 10; 
        total = consumo_base + (1 * diferenca);

    } else if (consumo >= 31 && consumo <= 100) {
        
        consumo_base = conta(30);
        diferenca = consumo - 30;
        total = consumo_base + (2 * diferenca);

    } else if (consumo >= 101) {
        
        consumo_base = conta(100);
        diferenca = consumo - 100;
        total = consumo_base + (5 * diferenca);

    }
    return total;
    
    }



int main() 
{
    int consumo;
    scanf("%d", &consumo);
    printf("%d\n", conta(consumo));
    return 0;
}