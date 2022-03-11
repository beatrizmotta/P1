#include <stdio.h>


void PedraPapel(double a_r, double a_w, int j1_r, int j1_w, int j2_r, int j2_w) {
    int vitoria_1, vitoria_2;
    double somatorio, cinco_percent;
    double valor_ganho;

    somatorio = a_w + a_r;

    //Willy = 1 Rodrigo = 2
    /*
        PEDRA = 2
        3 = 1
        2 = 2
        SPOCK = 5
        LAGARTO = 4
    
        1 representa 2
        2 representa Pedra
        3 representa 3
        4 representa Lagarto
        5 representa Spock
    */

    //Cen�rios em que Willy ganha
    
    /*
    1 representa Tesoura
    2 representa Pedra
    3 representa Papel
    4 representa Lagarto
    5 representa Spock
    */
    //Rodada 1
    //Willy Ganhando
    if (j1_w == 1 && j1_r == 3) {
        vitoria_1 = 1;
    } else if (j1_w == 3 && j1_r == 2) {
        vitoria_1 = 1;
    } else if (j1_w == 2 && j1_r == 4) {
        vitoria_1 = 1;
    } else if (j1_w == 4 && j1_r == 5) {
        vitoria_1 = 1;
    } else if (j1_w == 5 && j1_r == 1) {
        vitoria_1 = 1;
    } else if (j1_w == 1 && j1_r == 4) {
        vitoria_1 = 1;
    } else if (j1_w == 4 && j1_r == 3) {
        vitoria_1 = 1;
    } else if (j1_w == 3 && j1_r == 5) {
        vitoria_1 = 1;
    } else if (j1_w == 5 && j1_r == 2) {
        vitoria_1 = 1;
    } else if (j1_w == 2 && j1_r == 1) {
        vitoria_1 = 1;
        //Cen�rios em que Rodrigo Ganha
    } else if (j1_w == 3 && j1_r == 1) {
        vitoria_1 = 2;
    } else if (j1_w == 2 && j1_r == 3) {
        vitoria_1 = 2;
    } else if (j1_w == 4 && j1_r == 2) {
        vitoria_1 = 2;
    } else if (j1_w == 5 && j1_r == 4) {
        vitoria_1 = 2;
    } else if (j1_w == 1 && j1_r == 5) {
        vitoria_1 = 2;
    } else if (j1_w == 4 && j1_r == 1) {
        vitoria_1 = 2;
    } else if (j1_w == 3 && j1_r == 4) {
        vitoria_1 = 2;
    } else if (j1_w == 5 && j1_r == 3) {
        vitoria_1 = 2;
    } else if (j1_w == 2 && j1_r == 5) {
        vitoria_1 = 2;
    } else if (j1_w == 1 && j1_r == 2) {
        vitoria_1 = 2;
    } else if (j1_w == j1_r) {
        //Cen�rio de empate
        vitoria_1 = 0;
    } 

    //Rodada 2
    if (j2_w == 1 && j2_r == 3) {
        vitoria_2 = 1;
    } else if (j2_w == 3 && j2_r == 2) {
        vitoria_2 = 1;
    } else if (j2_w == 2 && j2_r == 4) {
        vitoria_2 = 1;
    } else if (j2_w == 4 && j2_r == 5) {
        vitoria_2 = 1;
    } else if (j2_w == 5 && j2_r == 1) {
        vitoria_2 = 1;
    } else if (j2_w == 1 && j2_r == 4) {
        vitoria_2 = 1;
    } else if (j2_w == 4 && j2_r == 3) {
        vitoria_2 = 1;
    } else if (j2_w == 3 && j2_r == 5) {
        vitoria_2 = 1;
    } else if (j2_w == 5 && j2_r == 2) {
        vitoria_2 = 1;
    } else if (j2_w == 2 && j2_r == 1) {
        vitoria_2 = 1;
        //Cen�rios em que Rodrigo Ganha
    } else if (j2_w == 3 && j2_r == 1) {
        vitoria_2 = 2;
    } else if (j2_w == 2 && j2_r == 3) {
        vitoria_2 = 2;
    } else if (j2_w == 4 && j2_r == 2) {
        vitoria_2 = 2;
    } else if (j2_w == 5 && j2_r == 4) {
        vitoria_2 = 2;
    } else if (j2_w == 1 && j2_r == 5) {
        vitoria_2 = 2;
    } else if (j2_w == 4 && j2_r == 1) {
        vitoria_2 = 2;
    } else if (j2_w == 3 && j2_r == 4) {
        vitoria_2 = 2;
    } else if (j2_w == 5 && j2_r == 3) {
        vitoria_2 = 2;
    } else if (j2_w == 2 && j2_r == 5) {
        vitoria_2 = 2;
    } else if (j2_w == 1 && j2_r == 2) {
        vitoria_2 = 2;
    } else if (j2_w == j2_r) {
        //Cen�rio de empate
        vitoria_2 = 0;
    } 

    if (vitoria_1 == 0) {
        printf("Empate\n");
    } else if (vitoria_1 == 1) {
        printf("Willy venceu a partida 1\n");
    } else if (vitoria_1 == 2) {
        printf("Rodrigo venceu a partida 1\n");
    }

    if (vitoria_2 == 0) {
        printf("Empate\n");
    } else if (vitoria_2 == 1) {
        printf("Willy venceu a partida 2\n");
    } else if (vitoria_2 == 2) {
        printf("Rodrigo venceu a partida 2\n");
    }

    if ((vitoria_1 == 1 && vitoria_2 == 2) || (vitoria_1 == 2 && vitoria_2 == 1) || (vitoria_1 == 0 && vitoria_2 == 0)) {
        printf("Empate na aposta\n");
    } else if (vitoria_1 == 1 && vitoria_2 == 1) {
        printf("Willy foi o vencedor da aposta\n");
        cinco_percent = somatorio * 0.05;
        cinco_percent = cinco_percent * 2;
        valor_ganho = somatorio + cinco_percent;
        printf("Valor ganho: R$%.2lf", valor_ganho);
    } else if (vitoria_1 == 2 && vitoria_2 == 2) {
        printf("Rodrigo foi o vencedor da aposta\n");
        cinco_percent = somatorio * 0.05;
        cinco_percent = cinco_percent * 2;
        valor_ganho = somatorio + cinco_percent;
        printf("Valor ganho: R$%.2lf", valor_ganho);
    } else if (vitoria_1 == 0 && vitoria_2 == 1) {
        printf("Willy foi o vencedor da aposta\n");
        cinco_percent = somatorio * 0.05;
        valor_ganho = somatorio + cinco_percent;
        printf("Valor ganho: R$%.2lf", valor_ganho);
    } else if (vitoria_1 == 1 && vitoria_2 == 0) {
        printf("Willy foi o vencedor da aposta\n");
        cinco_percent = somatorio * 0.05;
        valor_ganho = somatorio + cinco_percent;
        printf("Valor ganho: R$%.2lf", valor_ganho);
    } else if (vitoria_1 == 0 && vitoria_2 == 2) {
        printf("Rodrigo foi o vencedor da aposta\n");
        cinco_percent = somatorio * 0.05;
        valor_ganho = somatorio + cinco_percent;
        printf("Valor ganho: R$%.2lf", valor_ganho);
    } else if (vitoria_1 == 2 && vitoria_2 == 0) {
        printf("Rodrigo foi o vencedor da aposta\n");
        cinco_percent = somatorio * 0.05;
        valor_ganho = somatorio + cinco_percent;
        printf("Valor ganho: R$%.2lf", valor_ganho);
    } 

}



int main()
{
    double a_willy, a_rodrigo;
    int j1_willy, j1_rodrigo, j2_willy, j2_rodrigo;
    scanf("%lf %lf %d %d %d %d", &a_rodrigo, &a_willy, &j1_rodrigo, &j1_willy, &j2_rodrigo, &j2_willy);
    PedraPapel(a_rodrigo, a_willy, j1_rodrigo, j1_willy, j2_rodrigo, j2_willy);
    return 0;
}