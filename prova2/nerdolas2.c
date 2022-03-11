#include <stdio.h>

int primo(int n, int c, int isPrimo) {
    int number = n;
    int counter = c; 
    int isP = isPrimo;
    if (counter < 2) {
        return isP;
    } else {
        if (number % counter == 0) {
            if (number != 2) {
                isP = 0; 
            } else if (number == 2) {
                isP = 1;
            }
        } else {
            isP = 1; 
        }
        counter--;
        primo(number, counter, isP);
    }
}

int rdm;

int armangue(int inicio, int hab_will, int atac_will, int life_will, int hab_gab, int atac_gab, int life_gab) {
    int h_will = hab_will;
    int a_will;
    int v_will = life_will;
    int h_gab = hab_gab;
    int a_gab;
    int v_gab = life_gab;
    int ataques_will = 1;
    int ataques_gab = 1;
    int rd = rdm;

    int victory = 0;

    // Habilidades Will
    switch (hab_will)
    {
    case 1:
        if (primo(rd, rd, 0)) {
            ataques_will++; 
        }
        break;
    case 2:
        if (primo(life_will, life_will, 0) && primo(life_gab, life_gab, 0)) {
            a_will = atac_will + 25;
        }
        break;
    case 3:
        if (primo(life_will, life_will, 0) || primo(atac_will, atac_will, 0)) {
            a_will = atac_will + 10;
        }
        break;
    default:
        break;
    }

    //Habilidades Gabriel
    switch (hab_gab)
    {
    case 1:
        if (primo(rd, rd, 0)) {
            ataques_gab++; 
        }
        break;
    case 2:
        if (primo(life_gab, life_gab, 0) && primo(life_will, life_will, 0)) {
            a_gab = atac_gab + 25;
        }
        break;
    case 3:
        if (primo(life_gab, life_gab, 0) || primo(atac_gab, atac_gab, 0)) {
            a_gab = atac_gab + 10;
        }
        break;
    default:
        break;
    }
    

    if (inicio == 1) {
        if (ataques_will == 2) {
            v_gab = life_gab - a_will;
            v_gab = v_gab - a_will;
        } else {
            v_gab = life_gab - a_will;
        }

        if (v_gab <= 0) {
            victory = 1;
        } else {
            if (ataques_gab == 2) {
                v_will = life_will - a_gab;
                v_will = v_will - a_gab;
            } else {
                v_will = life_will - a_gab;
            }
        }

        if (v_gab <= 0) {
            victory = 1;
        } else if (v_will <= 0) {
            victory = 2;
        } else {
            h_will = hab_will;
            a_will = atac_will;
            v_will = life_will;
            h_gab = hab_gab;
            a_gab = atac_gab;
            v_gab = life_gab;
            armangue(inicio, h_will, a_will, v_will, h_gab, a_gab, v_gab);
        }

        if (victory == 1) {
            return 1;
        } if (victory == 2) {
            return 2;
        }

    } else {
        if (ataques_gab == 2) {
            v_will = life_will - a_gab;
            v_will = v_will - a_gab;
        } else {
            v_will = life_will - a_gab;
        }

        if (v_will <= 0) {
            victory = 2;
        } else {
            if (ataques_will == 2) {
                v_gab = life_gab - a_will;
                v_gab = v_gab - a_will;
            } else {
                v_gab = life_gab - a_will;
            }
        }

        if (v_will <= 0) {
            victory = 2;
        } else if (v_gab <= 0) {
            victory = 1;
        } else {
            h_will = hab_will;
            a_will = atac_will;
            v_will = life_will;
            h_gab = hab_gab;
            a_gab = atac_gab;
            v_gab = life_gab;
            armangue(inicio, h_will, a_will, v_will, h_gab, a_gab, v_gab);
        }



        if (ataques_will == 2) {
            v_gab = life_gab - a_will;
            v_gab = v_gab - a_will;
        } else {
            v_gab = v_gab - a_will;
        }

        if (victory == 1) {
            return 1;
        } if (victory == 2) {
            return 2;
        }
    }

}

int vitorias_will = 0;
int vitorias_gab = 0;

void loop(int rounds) {
    int r = rounds;
    if (r == 0) {
        //  
    } else {
        rdm = r;
        int inicio, hab_will, atac_will, life_will, hab_gab, atac_gab, life_gab;
        scanf("%d %d %d %d %d %d %d", &inicio, &hab_will, &atac_will, &life_will, &hab_gab, &atac_gab, &life_gab);
        int v = armangue(inicio, hab_will, atac_will, life_will, hab_gab, atac_gab, life_gab);
        if (v == 1) {
            vitorias_will++;
        } else if (v == 2) {
            vitorias_gab++;
        }
        r--;
        loop(r);
    }

}

int main()
{
    int rodadas;
    scanf("%d", &rodadas);
    loop(rodadas);

    printf("Will ganhou %d rodadas\n", vitorias_will);
    printf("Gabriel ganhou %d rodadas\n", vitorias_gab);

    return 0;
}