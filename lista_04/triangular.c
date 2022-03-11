#include <stdio.h>

int triangular(int num, int count, int bo) {
    int number = num;
    int c = count; 
    int b = bo;
    int p;

    if (number <= 0) {
        return 0;
    } else {

        if (number - c == 0) {
            return b;
        } else {
            p = (c * (c + 1) * (c + 2));
            if (number == p) {
                b = 1;
                printf("%d * %d * %d = %d \nVerdadeiro", c, (c+1), (c+2), number);
            }
            c++;
            triangular(number, c, b);
        }

    }



}   


int main()
{
    int x;
    scanf("%d", &x);
    int resp = triangular(x, 0, 0);
    if (resp == 0) {
        printf("Falso");
    }
}