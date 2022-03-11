#include <stdio.h>

void euclides(int number1, int number2, int pN1, int pN2) {
    int n1 = number1;
    int n2 = number2;
    int a, d, q, r; 

    if (n1 == n2) {
        printf("MDC(%d,%d) = %d\n", n1, n2, n1);
    } else {
        if (n1 > n2) {
            a = n1; 
            d = n2;
        } else if (n1 < n2) {
            a = n2;
            d = n1; 
        }


        q = a / d;
        r = a % d;

        if (r == 0) {
            printf("MDC(%d,%d) = %d\n", pN1, pN2, d);    
        } else {
            n1 = d;
            n2 = r;
            euclides(n1, n2, pN1, pN2);
        }

    }
}

void loop(int n) {
    int number = n;
    if (number == 0) {
        // Boilerplate 
    } else {
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        euclides(n1, n2, n1, n2);
        number--;
        loop(number);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    loop(n);
    return 0;
}