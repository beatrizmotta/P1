#include <stdio.h>

int fat(int n) {
    int num = n;

    if (num == 0) {
        return 1;
    } 
    return num * fat(num - 1);

}


int primo(int n, int c, int isPrimo) {
        int number = n;
        int counter = c; 
        int isP = isPrimo;
        if (counter < 2) {
            return isP;
        } else {
            if (number % counter == 0) {
                if (number != 2) {
                    isP = 0; 
                } else if (number == 2) {
                    isP = 1;
                }
            } else {
                isP = 1;
                if (number == 9) {
                    isP = 0;
                } 
            }
            counter--;
            primo(number, counter, isP);
        }
    
}



int acharPrimo(int num, int inicio) {
    int n = num;
    int i = inicio;

    int isP = primo(i, i, 0);
    if (isP == 0) {
        i++;
        acharPrimo(n, i);
    } else if (isP == 1) {
        return i;
    }
    
}


double serie(int num, int i, double ac) {
    int n = num;
    int in = i;
    double a = ac;
    if (in > n) {
        return a;
    } else {
        int nextPrimo;
        if (in == 1) {
            nextPrimo = 1;
        } else {
            nextPrimo = acharPrimo(in+20, in);
        }


        int fatorial = fat(in);

        printf("%d!/%d + ", in, nextPrimo);

        a = ac + (double)fatorial/(double)nextPrimo;
        in++;

        return serie(n, in, a);
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    printf("\n%.2lf", serie(n, 1, 0.0));
    return 0;
}