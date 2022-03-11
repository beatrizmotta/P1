#include <stdio.h>
/*

Recebe = 3 nums inteiros
Devolve 1 indicando:
1 - se todos são iguais
2 - se todos são diferentes
3 - se apenas dois números são iguais

*/
int igualoudif(int a, int b, int c) {
    if (a == b && b == c) {
        return 1;
    } else if (a != b && a !=c && b != c) {
        return 2; 
    } else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
        return 3;
    }
}

int main()
{   
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", igualoudif(a, b, c));
    
    return 0; 
}