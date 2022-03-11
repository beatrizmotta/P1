#include <stdio.h>
void swap(int*, int*);
void adiciona_dez(int*, int*);

int main() {
    int a, b; 
    printf("Insira dois números:\n>> ");
    // Aqui passamos os endereços
    scanf("%d %d", &a, &b);
    
    swap(&a, &b);
    adiciona_dez(&a, &b);
    printf("\n%d %d", a, b);

    return 0;
}

//Aqui dizemos que vamos usar os valores de tais endereços
void swap(int *x, int *y) {
    int t; 
    t = *x;
    *x = *y;
    *y = t;     
}

void adiciona_dez(int *x, int *y) {
    *x = *x + 10;
    *y = *y + 10;
}