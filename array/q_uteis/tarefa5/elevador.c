#include <stdio.h>

int elevador(int tamanho, int counter, int ultrapassou, int limite) {
    int s, e;
    int total;
    if (tamanho == counter) {
        return ultrapassou; 
    } else {
        scanf("%d %d", &s, &e);
        
        if (s + e > limite) {
            ultrapassou++;
        }

        counter++;

        elevador(tamanho, counter, ultrapassou, limite);
    }
}

int main() {
    // Pegar número de entradas e limite
    int limite, entradas;
    scanf("%d %d", &entradas, &limite);
    int res = elevador(entradas, 0, 0, limite);
    printf("%d", res);
    return 0;
}