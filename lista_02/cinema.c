#include <stdio.h>

int meia_inteira(int estudante, int idoso) {
    if (estudante || idoso) {
        return 1; 
    } else {
        return 0; 
    }
}



int main()
{
    int x, y; 
    scanf("%d %d", &x, &y);
    printf("%d", meia_inteira(x, y));
    return 0; 
}