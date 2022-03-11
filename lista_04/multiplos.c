/*

objetivo:
- exibir os múltiplos de um número n existentes entre os
valores dados A e B

*/

#include <stdio.h>

void findMultiplos(int m, int n1, int n2, int bool) {
    int number1, number2;
    int b = b;
    if (n1 >= n2) {
        number1 = n1;
        number2 = n2;
    } else if (n2 >= n1) {
        number1 = n2;
        number2 = n1;
    }

    if (number1 - number2 == 0) {
        if (number2 % m == 0) {
            printf("%d\n", number2);
            b = 1;
        } 
        if (b == 0) {
            printf("INEXISTENTE");
        }
    } else {
        if (number2 % m == 0) {
            printf("%d\n", number2);
            b = 1;
        } 
        number2++;
        findMultiplos(m, number1, number2, b);
    }


}


int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    findMultiplos(n, a, b, 0);
    return 0;
}