#include <stdio.h>

// Returns 1 if yes, 0 if not 
void primo(int n, int c, int isPrimo) {
    if (n != -1) {
        int number = n;
        int counter = c; 
        int isP = isPrimo;
        if (counter < 2) {
            printf("%d", isP);
        } else {
            if (number % counter == 0) {
                if (number != 2) {
                    isP = 0; 
                } else if (number == 2) {
                    isP = 1;
                }
            } else {
                isP = 1; 
            }
            counter--;
            primo(number, counter, isP);
        }
    }
}

void loop(int n) {
    int number = n;
    if (number != -1) {
        int n1;
        scanf("%d", &n1);
        primo(n1, n1, 0);
    }
    loop(number);
}


int main()
{
    int x;
    scanf("%d", &x);
    loop(x);
    return 0;
}