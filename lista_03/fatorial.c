#include <stdio.h>

int fat(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fat(n - 1);
}

int treatInput(int n) {
    if (n == -1) {
        return;
    }

    return fat(n);
}

int main()
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13);

    printf("%d\n", treatInput(n1));
    printf("%d\n", treatInput(n2));
    printf("%d\n", treatInput(n3));
    printf("%d\n", treatInput(n4));
    printf("%d\n", treatInput(n5));
    printf("%d\n", treatInput(n6));
    printf("%d\n", treatInput(n7));
    printf("%d\n", treatInput(n8));
    printf("%d\n", treatInput(n9));
    printf("%d\n", treatInput(n10));
    printf("%d\n", treatInput(n11));
    printf("%d\n", treatInput(n12));

    return 0;
}