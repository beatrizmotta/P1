#include <stdio.h>

/*
As pessoas só podem jogar ranqueada junto se tiverem diferença máxima de 3 ranques para mais ou para menos. 

Entrada:
Chars A e B que indicam o ranque de Nosbor e Felipe. 
Dois inteiros (1 - 3). 

YES se puderem jogar juntos
NO caso contrário
*/

void podemJogar(char N, char F, int rn, int rf) {
    //Ranques F = ferro B = bronze P = prata O = ouro
    int ranqueN, ranqueF;
    int ranque_numericoN, ranque_numericoF;
    int diferencaRanqueLetra;
    int diferencaRanqueNumero;

    switch (N)
    {
    case 'F':
        ranqueN = 1;
        break;
    case 'B':
        ranqueN = 2;
        break;
    case 'P':
        ranqueN = 3;
        break;
    case 'O':
        ranqueN = 4;
        break;
    default:
        break;
    }

    switch (F)
    {
    case 'F':
        ranqueF = 1;
        break;
    case 'B':
        ranqueF = 2;
        break;
    case 'P':
        ranqueF = 3;
        break;
    case 'O':
        ranqueF = 4;
        break;
    default:
        break;
    }

    //Se estão no mesmo ranking - no máximo 2 ranks de diferenca
    if (ranqueF == ranqueN) {
        printf("YES");
    } else {
        //Se os ranks são diferentes
        if (ranqueF > ranqueN) {
            diferencaRanqueLetra = ranqueF - ranqueN;
        } else {
            diferencaRanqueLetra = ranqueN - ranqueF;
        }
        
        if (diferencaRanqueLetra > 1) {
            printf("NO");
        } else {
            //Se N for o que tiver o maior ranque
            if (ranqueF > ranqueN) {

                if (rf == 1) ranque_numericoF = 6;
                if (rf == 2) ranque_numericoF = 5;
                if (rf == 3) ranque_numericoF = 4;

                if (rn == 1) ranque_numericoN = 3;
                if (rn == 2) ranque_numericoN = 2;
                if (rn == 3) ranque_numericoN = 1;

                diferencaRanqueNumero = ranque_numericoF - ranque_numericoN;

                if (diferencaRanqueNumero <= 3) {
                    printf("YES");
                } else {
                    printf("NO");
                }

            } else if (ranqueN > ranqueF) {

                if (rn == 1) ranque_numericoN = 6;
                if (rn == 2) ranque_numericoN = 5;
                if (rn == 3) ranque_numericoN = 4;
                
                if (rf == 1) ranque_numericoF = 3;
                if (rf == 2) ranque_numericoF = 2;
                if (rf == 3) ranque_numericoF = 1;


                diferencaRanqueNumero = ranque_numericoN - ranque_numericoF;

                if (diferencaRanqueNumero <= 3) {
                    printf("YES");
                } else {
                    printf("NO");
                }

            }
        
        }
    }
}


int main()
{
    char N, F;
    int rn, rf;
    scanf("%c %c %d %d", &N, &F, &rn, &rf);
    podemJogar(N, F, rn, rf);
}