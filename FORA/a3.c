#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    question:
        printf("Diz o seu numero: ");
        scanf("%d", &num);

    
        if (num > 20 || num < 20) {
            goto errou;
        } else {
            printf("Acertou miseravi");
            exit(0);
        }

    errou:
        printf("Errou burro.");
        goto question;
    return 0; 
}