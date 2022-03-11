#include <stdio.h>
void calc(float, float*, float*);

int main() {
    float raio;
    float area, perimetro;

    printf("Mande bala:\n>> ");
    scanf("%f", &raio);  

    calc(raio, &area, &perimetro);

    printf("%f %f", area, perimetro);

    return 0;
}

void calc(float raio, float *area, float *perimetro) {
    float pi = 3.14;

    *area = raio * raio * pi;
    *perimetro = 2 * raio * pi;
}