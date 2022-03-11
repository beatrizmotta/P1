#include <stdio.h>

// 1 - Clodes    2 - Bezaliel 
// Clodes sempre ataca primeiro 

// Be sempre ataque de dano
// Clodes sempre adiciona o dano em 50 unidades

void pokemon(int v1, int v2, int d1, int d2) {
    int vida1 = v1; 
    int vida2 = v2;
    int dano1 = d1;
    int dano2 = d2;


    if (vida1 >= 0 && vida2 >= 0) {
        // Ataque do Clodes
        if ((dano2 * 4) >= vida1) {
            vida2 = vida2 - dano1;
        } else {
            dano1 = dano1 + 50;
        }

        // Ataque do Bezaliel
        vida1 = vida1 - dano2;
        pokemon(vida1, vida2, dano1, dano2);   
    } else if (vida1 <= 0 && vida2 > 0) {
        printf("Bezaliel\n");
    } else if (vida1 > 0 && vida2 <= 0) {
        printf("Clodes\n");
    } else if (vida1 <= 0 && vida1 <= 0) {
        printf("Clodes\n");
    }
}

void loop(int n) {
    int number = n;

    if (number != 0) {
        number--;
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        pokemon(a, b, c, d);
        
        loop(number);
    }

}


int main()
{
    int n; 
    scanf("%d", &n);
    loop(n);


    return 0;
}