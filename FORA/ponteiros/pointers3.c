#include <stdio.h>
int *fun(); 

int main() {
    int *j = fun();
    printf("%u", *j);
    return 0; 
}

int *fun() {
    int static k = 35; 
    return &k;
}