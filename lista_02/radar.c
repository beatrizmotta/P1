#include <stdio.h>

void radar(double vmax, double vcar) {
    
    double diferenca; 
    diferenca = vcar/vmax;
    if (vcar <= vmax) {

        printf("0.00\n0");

    } else if (diferenca > 1 && diferenca <= 1.2) {

        printf("85.13\n4");

    } else if (diferenca > 1.2 && diferenca <= 1.5) {

        printf("127.69\n5");

    } else if (diferenca > 1.5) {

        printf("574.62\n7");

    }
    
}


int main() 
{
    
    double vmax, vcar; 
    scanf("%lf %lf", &vmax, &vcar);
    radar(vmax, vcar);

    return 0; 
}