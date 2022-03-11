#include <stdio.h>

int euclides(int number1, int number2, int pN1, int pN2, int max) {
    int n1 = number1;
    int n2 = number2;
    int a, d, q, r; 
    int mdc = max;

    if (n1 == n2) {
        mdc = n1;
        return mdc;
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
            mdc = d;
            return mdc;   
        } else {
            n1 = d;
            n2 = r;
            euclides(n1, n2, pN1, pN2, mdc);
        }
    }
}

int main()
{   
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", euclides(x, y, x, y, 1));


    return 0;
}