#include <stdio.h>
#include <math.h>

void bhaskara(double a, double b, double c)
{
    double x1, x2, delta, denominador; 

    if (a == 0 || b == 0) {
        printf("NEESG");
    } else {
        delta = (b*b - 4 * a * c);
        delta = sqrt(delta);
        denominador = a * 2; 

        if (delta < 0) {
            printf("NRR");
        } else {
            x1 = (-b + delta)/denominador; 
            x2 = (-b - delta)/denominador; 

            printf("%.2lf %.2lf", x1, x2);

        }

    }

}


int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    bhaskara(a, b, c);
    return 0; 
}