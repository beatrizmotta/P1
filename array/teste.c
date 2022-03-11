#include <stdio.h>


void simplePrint(int b) {
    if (b == -1) {
        printf("STOP");
    } else {
        int n1;
        b = scanf("%d", &n1);
        printf("%d\n", b);
        simplePrint(b);
    }

}

int main() {
    int a;
    int b = scanf("%d", &a);
    simplePrint(b);

}