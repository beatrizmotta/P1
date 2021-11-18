#include <stdio.h>

//Oferecer desconto só se a pessoa a tiver idade par
/*
int idade_par(int idade) {
    return (idade % 2 == 0);
}

void desconto(int idade_a, int idade_b) {
    if (idade_par(idade_a)) {
        printf("desconto");
    } else {
        printf("sem desconto");
    }
}
*/
//Oferecer desconto quando uma das duas pessoas tiver idade impar 

int idade_impar(int idade) {
    return idade % 2 != 0;
}
void desconto(int idade_A, int idade_B) {
    if (idade_impar(idade_A) ^ idade_impar(idade_B)) {
        printf("apenas uma das pessoas tem idade impar");
    } else if (idade_impar(idade_A) || idade_impar(idade_B)) {
        printf("uma das pessoas, mas não necessariamente só uma tem idade impar");
    } else {
        printf("Ninguém tem idade impar");
    }
}

int main() {
    int pessoa_a, pessoa_b;
    scanf("%d %d", &pessoa_a, &pessoa_b);
    desconto(pessoa_a, pessoa_b);
    return 0; 
}