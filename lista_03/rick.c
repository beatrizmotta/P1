#include <stdio.h>

int rickception(int n, int t, int tipo) {
    
    int number = n;
    int term = t; 
    int type_ = tipo;


    if (term == 0) {
        return number;
    } else {
        int auxtype;
        if (type_ == 1) {
            number = number + 3; 
            auxtype = 2; 
        } else {
            number = number + number % 5;
            auxtype = 1;
        }
        term--;
        rickception(number, term, auxtype);
    }



}


int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int results = rickception(x, y, 1);
    printf("%d", results);
    return 0;
}