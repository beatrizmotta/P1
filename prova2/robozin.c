#include <stdio.h>

void tradutor(int number) {
    int n = number; 
    if (n < 10) {
        if (n % 2 == 0) {
            printf(".\n");
        } else {
            printf("-\n");
        }
    } else {
        if (n % 2 == 0) {
            printf(".");
        } else {
            printf("-");
        }
        tradutor(n/10);
    }

}

void loop(int n) {
    int number = n;
    if (number != 0) {
        int n1;
        scanf("%d", &n1);
        tradutor(n1);
    }
    number--;
    loop(number);
}

int main()
{   
    int n = 10;
    loop(n);
    return 0;
}