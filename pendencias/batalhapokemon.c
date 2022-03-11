
#include <stdio.h>
#include <math.h>

int rodadas_p_ganhar(int vida_inimigo, int dano, int rodadas) {
    if (vida_inimigo <= 0) {
        return rodadas;
    } else {
        vida_inimigo -= dano;
        rodadas++;
        return rodadas_p_ganhar(vida_inimigo, dano, rodadas);
    }

}

int rodadas_p_perder(int vida, int dano, int rodadas) {
    if (vida <= 0) {
        return rodadas;
    } else {
        vida -= dano;
        rodadas++;
        return rodadas_p_perder(vida, dano, rodadas);
    }
}

void batalha(int vida_c, int vida_b, int dano_c, int dano_b, int ganhador) {
    // Condi��o de parada
    if (vida_c <= 0 || vida_b <= 0) {
        if (ganhador == 1) {
            printf("Clodes\n");
        } else if (ganhador == 2 || vida_c <= 0) {
            printf("Bezaliel\n");
        }
        return;
    } else {
        // Clodes Ataca primeiro
        // -> No entanto, se ele so pode atacar OU aumentar seu dano exclusivamente a cada rodada.
        // -> Então vamos verificar se ele consegue matar

        int rodadas_para_perder;
        rodadas_para_perder = rodadas_p_perder(vida_c, dano_b, 0);
        
        int rodadas_para_ganhar;
        rodadas_para_ganhar = rodadas_p_ganhar(vida_b, dano_c, 0);
    
        // Clodes 
        if (vida_c > 0 && dano_c >= vida_b) {
            vida_b -= dano_c;
            ganhador = 1;
        } else if (rodadas_para_ganhar <= rodadas_para_perder) {
            vida_b -= dano_c;
        } else {
            dano_c += 50;
        }

        //Bezaliel

        if (vida_b > 0 && dano_b >= vida_c) {
            vida_c -= dano_b;
            ganhador = 2;
        } else {
            vida_c -= dano_b;
        }
        
        // printf("v clodes: %d v bel: %d d clodes: %d d bel: %d\n", vida_c, vida_b, dano_c, dano_b);
        batalha(vida_c, vida_b, dano_c, dano_b, ganhador);

    }


}

void loop(int counter) {
    if (counter == 0) {
        return;
    } else {
        int vida_c, vida_b, dano_c, dano_b;

        scanf("%d %d %d %d", &vida_c, &vida_b, &dano_c, &dano_b);
        batalha(vida_c, vida_b, dano_c, dano_b, 0);

        counter--;
        loop(counter);
    }
}



int main()
{
    int n;
    scanf("%d", &n);
    loop(n);


    return 0;
}