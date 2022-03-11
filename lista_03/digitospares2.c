#include <stdio.h>
#include <math.h>

double potencia(int n, int dezenas) {
    int dzn = dezenas;
    double division = (float) n / (float) 10;
    if (division <= 0) {
        double pot = (double) dzn;
        pot = pow((double) 10, dezenas - 1);
        return pot;
    } else {
        dzn++;
        return potencia(division, (int) dzn);
    }
}

int ContarPares(int n, int pares, double dezenas) {
    int dzn = (int) dezenas;
    int pr = pares;
    int num = n;
    //Condição de Parada
    if (dzn == 1 || (double) dzn == (double) 1) {
        if (n % 2 == 0) {
            pr++;
        }
        return pr;
    } else {
        if ((n / dzn) % 2 == 0) {
            pr++;
        }
        dzn = dzn / 10;
        return ContarPares(num, pr, (double) dzn);
    }
    return 0;

}

int main()
{
    int x;
    scanf("%d", &x);
    double pot = potencia(x, 0);
    printf("%d", ContarPares(x, 0, pot));
    return 0;
}
