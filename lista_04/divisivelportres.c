#include <stdio.h>

int divtres(int n1, int n2, int c) {
    int num1 = n1;
    int num2 = n2; 
    int counter = c;

    if (num1 - num2 == 0) {
        if (num1 % num2 == 0) {
            if (num2 % 3 == 0) {
                counter++;
            }
            
        }
        return counter;    
    
    } else {
        
        if (num1 % num2 == 0) {
            if (num2 % 3 == 0) {
                counter++;
            }
            
        }
        
        num2++;
        divtres(num1, num2, counter);
    }

}


int main()
{
    int x, y;
    scanf("%d", &x);
    y = divtres(x, 1, 0);
    
    if (y > 0) {
        printf("%d", y);
    } else {
        printf("O numero nao possui divisores multiplos de 3!");
    }
    return 0;
}