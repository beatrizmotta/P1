#include <stdio.h>
#include <stdlib.h>

int ContaNumerosPares(int n, int counter) {
    int ct = counter; 
    if (n / 10 <= 0) {
        return ct;
    } 

    if ((n % 10) % 2 == 0) {
        ct++;
    }

    return ContaNumerosPares(n/10, ct);

}

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", ContaNumerosPares(x, 0));
    return 0;
}
