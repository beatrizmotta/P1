/*

n entre 0 e 100 (sem contar os extremos)
todos distintos
média artimética
o mais próxima da média ganha

Se rodade x: 
    ganhador +10 pontos
Se rodada vencedor na rodada passada:
    0 <= p <= 20 : 10 + 0.2 * p
    20 < p <= 40 : 10 + 0.4 * p
    40 < p <= 60 : 10 + 0.6 * p
    60 < p <= 80 : 10 + 0.8 * p
    p > 80 : 10 + 10 + 1 * p

Regularidade:
Se menor ou igual a 10:
    +10 pontos para todos
    Se campeão: acumula no que já havia ganhado

Entrada: A, P, T, W. 
Quatro n erais distintos entre 0 e 10. 
Uma letra indicando qual foi o campeão da rodada passada
(x se primeira rodada)



*/

#include <stdio.h>
#include <math.h>

int main()
{
    int pontA, pontP, pontT, pontW;
    double pA = 0, pP = 0, pT = 0, pW = 0;
    double nA, nP, nT, nW;
    double dA, dP, dT, dW;
    char ganhadorpassado;
    char ganhadoratual;

    double media;
    double regularidade;

    if ((pA <= 0 && pA >= 100) || (pT <= 0 && pT >= 100) || (pW <= 0 && pW >= 100) || (pP <= 0 && pP >= 100)) {
        printf("Números inválidos!\nPróxima rodada.");
    } else {

    
    scanf("%d %d %d %d %lf %lf %lf %lf %c", &pontA, &pontP, &pontT, &pontW, &nA, &nP, &nT, &nW, &ganhadorpassado);
    media = (nA + nP + nT + nW) / (float)4;

    dA = nA - media;
    if (dA < 0) dA *= -1;
    dP = nP - media;
    if (dP < 0) dP *= -1;
    dT = nT - media;
    if (dT < 0) dT *= -1;
    dW = nW - media;
    if (dW < 0) dW *= -1;


    if (dA < dP && dA < dT && dA < dW) {
        if (ganhadorpassado == 'a') {
            if (pontA > 0 && pontA <= 20) {
                pA = 10 + 0.2 * pontA;
            } else if (pontA > 20 && pontA <= 40) {
                pA = 10 + 0.4 * pontA;
            } else if (pontA > 40 && pontA <= 60) {
                pA = 10 + 0.6 * pontA;
            } else if (pontA > 60 && pontA <= 80) {
                pA = 10 + 0.8 * pontA;
            } else if (pontA > 80) {
                pA = 10 * 1 * pontA;
            }
        } else {
            pA = 10;
        }
    } else if (dP < dA && dP < dT && dP < dW) {
        if (ganhadorpassado == 'p') {
            if (pontP > 0 && pontP <= 20) {
                pP = 10 + 0.2 * pontP;
            } else if (pontP > 20 && pontP <= 40) {
                pP = 10 + 0.4 * pontP;
            } else if (pontP > 40 && pontP <= 60) {
                pP = 10 + 0.6 * pontP;
            } else if (pontP > 60 && pontP <= 80) {
                pP = 10 + 0.8 * pontP;
            } else if (pontP > 80) {
                pP = 10 * 1 * pontP;
            }
        } else {
            pP = 10;
        }
    } else if (dT < dA && dT < dP && dT < dW) {
        if (ganhadorpassado == 't') {
            if (pontT > 0 && pontT <= 20) {
                pT = 10 + 0.2 * pontT;
            } else if (pontT > 20 && pontT <= 40) {
                pT = 10 + 0.4 * pontT;
            } else if (pontT > 40 && pontT <= 60) {
                pT = 10 + 0.6 * pontT;
            } else if (pontT > 60 && pontT <= 80) {
                pT = 10 + 0.8 * pontT;
            } else if (pontT > 80) {
                pT = 10 * 1 * pontT;
            }
        } else {
            pT = 10;
        }
    } else if (dW < dA && dW < dT && dW < dP) {
        if (ganhadorpassado == 'w') {
            if (pontW > 0 && pontW <= 20) {
                pW = 10 + 0.2 * pontW;
            } else if (pontW > 20 && pontW <= 40) {
                pW = 10 + 0.4 * pontW;
            } else if (pontW > 40 && pontW <= 60) {
                pW = 10 + 0.6 * pontW;
            } else if (pontW > 60 && pontW <= 80) {
                pW = 10 + 0.8 * pontW;
            } else if (pontW > 80) {
                pW = 10 * 1 * pontW;
            }
        } else {
            pW = 10;
        }
    }

    double valor = ((dA)*(dA) + (dP)*(dP) + (dT)*(dT) + (dT)*(dT));
    regularidade = sqrt(valor);

    if (regularidade <= 10) {
        pA = pA + 10;
        pP = pP + 10;
        pT = pT + 10;
        pW = pW + 10;
    }

    if (pA > pP && pA > pT && pA > pW) {
        ganhadoratual = 'a';
    } else if (pP > pA && pP > pT && pP > pW) {
        ganhadoratual = 'p';
    } else if (pW > pP && pW > pA && pW > pT) {
        ganhadoratual = 'w';
    } else if (pT > pP && pT > pA && pT > pW) {
        ganhadoratual = 't';
    }

    if (ganhadorpassado == ganhadoratual) {
        
        switch (ganhadoratual)
        {
        case 'a':
            printf("Arthur venceu outra vez!\nPontuação: +%.0lf\n", pA);
            break;
        case 'p':
            printf("Pedro venceu outra vez!\nPontuação: +%.0lf\n", pP);
            break;
        case 't':
            printf("Tulio venceu outra vez!\nPontuação: +%.0lf\n", pT);
            break;
        case 'w':
            printf("Will venceu outra vez!\nPontuação: +%.0lf\n", pW);
            break;
        default:
            break;
        }
    } else {
        switch (ganhadoratual)
        {
        case 'a':
            printf("Arthur venceu!\nPontuação: +10");
            break;
        case 'p':
            printf("Pedro venceu!\nPontuação: +10");
            break;
        case 't':
            printf("Tulio venceu!\nPontuação: +10");
            break;
        case 'w':
            printf("Will venceu!\nPontuação: +10");
            break;
        default:
            break;
        }

        if (regularidade <= 10) {
            printf("Houve regularidade na rodada!\nTodos ganharam +10 pontos\n");
        }
    }



    }



    return 0;







}