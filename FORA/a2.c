#include <stdio.h>

// A = 65
// G = 71

void print_row(int restr[], int tamanho) {
    int i = 65;
    int j;
    while (i <= 71) {
        printf("%c ", i);
        for (j = 0; j < tamanho; j++) {
            if (i == restr[j]) {
                printf("- ");
            }
        }
        i++;
    }

    i = 70;
    while (i >= 65) {
        printf("%c ", i);
        for (j = 0; j < tamanho; j++) {
            if (i == restr[j]) {
                printf("- ");
            }    
        }
        i--;
    }
    printf("\n");
}


int main() {
    int restr[3] = {69, 70, 71};
    print_row(restr, 2);



    return 0;
}