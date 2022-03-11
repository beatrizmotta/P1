/*

São escolhidos 4 números reais maiores do que 0 e menores
do que 1. 

Se todos forem distintos, tiramos a média aritmética.

Em seguida, é analisado qual dos números escolhidos foi o mais próximo
da média. Quem o escolheu ganha 10 pontos. 

1 rodada (0<=P<=20) = 10 pontos
0 <= P <= 20 = 10 + 0.2 * P
20 < P <= 40 = 10 + 0.4 * P
40 < P <= 60 = 10 + 0.6 * P
60 < P <= 80 = 10 + 0.8 * P
P > 8 = 10 + 1 * P

Fora isso, ainda existe um 'fator regularidade'. 
Raíz aquadrada de (a - m)^2 + (p - m)^2 + (t - m)^2 + (w - m)^2

Se <= 10, todos ganham 10 pontos.

*/

//Entrada: quatro valores inteiros respectivos á P, 4 inteiros entre 0 e 100
//Um caractere correspondendo ao campeão da rodada passada

#include <stdio.h>
#include <math.h>

int main()
{
    int pe, tu, gab, yan, paloma, vin, elias;
    scanf("%d %d %d %d %d %d", &pe, &tu, &gab, &yan, &paloma, &vin, &elias);
    int quantidade = 7;
    int quantidade_casa1 = 7;
    int quantidade_casa2 = 7;
    int quantidade_casa3 = 7;

    //Quantos passos cada integrante dá para ir em todos os ensaios

    int m_pedro = (3 + 5 + 5 +7 + 7 + 10) * 100;
    int m_tulio = (3 + 2 + 2 + 4 + 4 + 7) * 100;
    int m_gab = (2 + 5 + 4 + 4 + 6 + 5) * 100;
    int m_yan = (2 + 2 + 2 + 4 + 5 + 5) * 100;
    int m_paloma = (2 + 2 + 3 + 4 + 4 + 7) * 100;
    int m_vin = (3 + 2 + 2 + 4 + 6 + 7) * 100;
    int m_elias = (3 + 3 + 5 + 5 + 7 + 10) * 100;


    if (pe <= m_pedro) {
        quantidade = quantidade - 1; 
    } else {
        quantidade = quantidade + 0;
    }
    if (tu <= m_tulio) {
        quantidade = quantidade - 1;
    } else {
        quantidade = quantidade + 0;
    } if (gab <= m_gab) {
        quantidade = quantidade - 1;
    } else {
        quantidade = quantidade + 0;
    } if (yan <= m_yan) {
        quantidade = quantidade - 1;
    } else {
        quantidade = quantidade + 0;
    }
    if (paloma <= m_paloma) {
        quantidade = quantidade - 1;
    } else {
        quantidade = quantidade + 0;
    } if (vin <= m_vin) {
        quantidade = quantidade - 1;
    } else {
        quantidade = quantidade + 0;
    } if (elias <= m_elias) {
        quantidade = quantidade - 1;
    } else {
        quantidade = quantidade + 0;
    }

    //Para a Casa 1
    if (pe < m_pedro + 500) {
        quantidade_casa1 = quantidade_casa1 - 1; 
    } else {
        quantidade_casa1 = quantidade_casa1 + 0;
    } if (tu < m_tulio + 200) {
        quantidade_casa1 = quantidade_casa1 - 1;
    } else {
        quantidade_casa1 = quantidade_casa1 + 0;
    }  if (gab < m_gab + 200) {
        quantidade_casa1 = quantidade_casa1 - 1;
    } else {
        quantidade_casa1 = quantidade_casa1 + 0;
    }  if (yan < m_yan + 200) {
        quantidade_casa1 = quantidade_casa1 - 1;
    } else {
        quantidade_casa1 = quantidade_casa1 + 0;
    }  if (paloma < m_paloma + 200) {
        quantidade_casa1 = quantidade_casa1 - 1;
    } else {
        quantidade_casa1 = quantidade_casa1 + 0;
    }  if (vin < m_vin + 400) {
        quantidade_casa1 = quantidade_casa1 - 1;
    } else {
        quantidade_casa1 = quantidade_casa1 + 0;
    }  if (elias < m_elias + 500) {
        quantidade_casa1 = quantidade_casa1 - 1;
    } else {
        quantidade_casa1 = quantidade_casa1 + 0;
    } 

    //Para Casa 2
    if (pe < m_pedro + 100) {
        quantidade_casa2 = quantidade_casa2 - 1; 
    } else {
        quantidade_casa2 = quantidade_casa2 + 0;
    } if (tu < m_tulio + 400) {
        quantidade_casa2 = quantidade_casa2 - 1;
    } else {
        quantidade_casa2 = quantidade_casa2 + 0;
    }  if (gab < m_gab + 600) {
        quantidade_casa2 = quantidade_casa2 - 1;
    } else {
        quantidade_casa2 = quantidade_casa2 + 0;
    }  if (yan < m_yan + 400) {
        quantidade_casa2 = quantidade_casa2 - 1;
    } else {
        quantidade_casa2 = quantidade_casa2 + 0;
    }  if (paloma < m_paloma + 600) {
        quantidade_casa2 = quantidade_casa2 - 1;
    } else {
        quantidade_casa2 = quantidade_casa2 + 0;
    }  if (vin < m_vin + 600) {
        quantidade_casa2 = quantidade_casa2 - 1;
    } else {
        quantidade_casa2 = quantidade_casa2 + 0;
    }  if (elias < m_elias + 900) {
        quantidade_casa2 = quantidade_casa2 - 1;
    } else {
        quantidade_casa2 = quantidade_casa2 + 0;
    } 

    //Para Casa 3
    if (pe < m_pedro + 500) {
        quantidade_casa3 = quantidade_casa3 - 1; 
    } else {
        quantidade_casa3 = quantidade_casa3 + 0;
    }  if (tu < m_tulio + 800) {
        quantidade_casa3 = quantidade_casa3 - 1;
    } else {
        quantidade_casa3 = quantidade_casa3 + 0;
    }  if (gab < m_gab + 1000) {
        quantidade_casa3 = quantidade_casa3 - 1;
    }else {
        quantidade_casa3 = quantidade_casa3 + 0;
    }  if (yan < m_yan + 600) {
        quantidade_casa3 = quantidade_casa3 - 1;
    } else {
        quantidade_casa3 = quantidade_casa3 + 0;
    }  if (paloma < m_paloma + 600) {
        quantidade_casa3 = quantidade_casa3 - 1;
    } else {
        quantidade_casa3 = quantidade_casa3 + 0;
    }  if (vin < m_vin + 400) {
        quantidade_casa3 = quantidade_casa3 - 1;
    } else {
        quantidade_casa3 = quantidade_casa3 + 0;
    }  if (elias < m_elias + 500) {
        quantidade_casa3 = quantidade_casa3 - 1;
    } else {
        quantidade_casa3 = quantidade_casa3 + 0;
    } 


    printf("%d %d %d %d %d %d %d\n", m_pedro + 500, m_tulio + 800, m_gab + 100, m_yan + 600, m_paloma + 600, m_vin + 400, m_elias + 500);
    return 0;
}





