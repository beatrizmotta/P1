#include <stdio.h>
int calc_fatorial(int);
void fatorial();
//Essa função acha o fatorial de um número


int main() {
    fatorial();
    return 0;
}

void fatorial() {
    int x;
    printf("Diga um numero\n>> ");
    scanf("%d", &x);
    int res = calc_fatorial(x);
    printf("%d", res);
}

int calc_fatorial(int x) {

    if (x == 1) 
        return 1;
    else
        return x * calc_fatorial(x-1);
}