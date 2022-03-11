#include <stdio.h>
/*
    Domingo = Pedro
    Segunda = Gabril
    Terça = Elias
    Quarta = Paloma
    Quinta = Vinicius
    Sexta = Yanka
    Sábado = Tulio

    Domingo -> Gabriel: 500m, Elias: 1000, Paloma: 700, Vinicius: 700, Yanka: 500m, Tulio: 300m
    Segunda -> Pedro: 500, Elias:500, Paloma: 400, Vinicius: 600, Yanka: 400, Tulio: 200
    Terça -> Pedro: 1000, Gabril: 500, Paloma: 300, Vinicius: 300, Yanka: 500, Tulio: 700
    Quarta: Pedro: 700, Gabril: 500, Elias: 300, Vinicius: 200, Yanka: 200, Tulio: 400
    Quinta: Pedro: 700, Gabril: 600, Elias: 300, Paloma: 200, Yanka: 200, Tulio: 400
    Sexta: Pedro: 500 , Gabril: 400, Elias:  500, Paloma: 200, Vinicius: 200, Tulio: 200 
    Sabado: Pedro: 300, Gabril: 200 , Elias: 700, Paloma: 400, Vinicius: 400, Yanka: 200

    Para ir para os ensaios:

    pedro_ensaio = 3700;
    gabriel_ensaio = 2700;
    elias_ensaio = 3300;
    paloma_ensaio = 2200;
    vini_ensaio = 2400;
    yanka_ensaio = 2000;
    tulio_ensaio = 2200;


*/
int main() {
    int pe, tu, gab, yan, paloma, vin, elias;
    scanf("%d %d %d %d %d %d", &pe, &tu, &gab, &yan, &paloma, &vin, &elias);

    //Quantos passos cada integrante dá para ir em todos os ensaios

    int m_pedro = (3 + 5 + 5 +7 + 7 + 10) * 100 * 2;
    int m_tulio = (3 + 2 + 2 + 4 + 4 + 7) * 100 * 2;
    int m_gab = (2 + 5 + 4 + 4 + 6 + 5) * 100 * 2;
    int m_yan = (2 + 2 + 2 + 4 + 5 + 5) * 100 * 2;
    int m_paloma = (2 + 2 + 3 + 4 + 4 + 7) * 100 * 2;
    int m_vin = (3 + 2 + 2 + 4 + 6 + 7) * 100 * 2;
    int m_elias = (5 + 3 + 3 + 5 + 10 + 7) * 100 * 2;

    //Para Casa 1
    int casa_1 = 7;
    
    if (pe < m_pedro + 500 * 2) {
        casa_1 = casa_1 - 1;
    } else if (pe >= m_pedro + 500 * 2) {
        casa_1 = casa_1 - 0;
    }

    if (tu < m_tulio + 200 * 2) {
        casa_1 = casa_1 - 1;
    } else if (tu >= m_tulio + 200 * 2) {
        casa_1 = casa_1 - 0;
    }

    if (gab < m_gab + 200 * 2) {
        casa_1 = casa_1 - 1;
    } else if (gab >= m_gab + 200 * 2) {
        casa_1 = casa_1 - 0;
    }

    if (yan < m_yan + 200 * 2) {
        casa_1 = casa_1 - 1;
    } else if (yan >= m_yan + 200 * 2) {
        casa_1 = casa_1 - 0;
    }

    if (vin < m_vin + 400 * 2) {
        casa_1 = casa_1 - 1;
    } else if (vin >= m_vin + 400 * 2) {
        casa_1 = casa_1 - 0;
    }

    if (elias < m_elias + 500 * 2) {
        casa_1 = casa_1 - 1;
    } else if (elias >= m_elias + 500 * 2) {
        casa_1 = casa_1 - 0;
    }

    //Para casa 2
    int casa_2 = 7;

    if (pe < m_pedro + 100 * 2) {
        casa_2 = casa_2 - 1;
    } else if (pe >= m_pedro + 100 * 2) {
        casa_2 = casa_2 - 0;
    }

    if (tu < m_tulio + 400 * 2) {
        casa_2 = casa_2 - 1;
    } else if (tu >= m_tulio + 400 * 2) {
        casa_2 = casa_2 - 0;
    }

    if (gab < m_gab + 600 * 2) {
        casa_2 = casa_2 - 1;
    } else if (gab >= m_gab + 600 * 2) {
        casa_2 = casa_2 - 0;
    }

    if (yan < m_yan + 400 * 2) {
        casa_2 = casa_2 - 1;
    } else if (yan >= m_yan + 400 * 2) {
        casa_2 = casa_2 - 0;
    }

    if (vin < m_vin + 600 * 2) {
        casa_2 = casa_2 - 1;
    } else if (vin >= m_vin + 600 * 2) {
        casa_2 = casa_2 - 0;
    }

    if (elias < m_elias + 900 * 2) {
        casa_2 = casa_2 - 1;
    } else if (elias >= m_elias + 900 * 2) {
        casa_2 = casa_2 - 0;
    }

    //Para Casa 3
    int casa_3 = 7;
    if (pe < m_pedro + 500 * 2) {
        casa_3 = casa_3 - 1;
    } else if (pe >= m_pedro + 500 * 2) {
        casa_3 = casa_3 - 0;
    }

    if (tu < m_tulio + 800 * 2) {
        casa_3 = casa_3 - 1;
    } else if (tu >= m_tulio + 800 * 2) {
        casa_3 = casa_3 - 0;
    }

    if (gab < m_gab + 100 * 20) {
        casa_3 = casa_3 - 1;
    } else if (gab >= m_gab + 100 * 20) {
        casa_3 = casa_3 - 0;
    }

    if (yan < m_yan + 600 * 2) {
        casa_3 = casa_3 - 1;
    } else if (yan >= m_yan + 600 * 2) {
        casa_3 = casa_3 - 0;
    }

    if (vin < m_vin + 400 * 2) {
        casa_3 = casa_3 - 1;
    } else if (vin >= m_vin + 400 * 2) {
        casa_3 = casa_3 - 0;
    }

    if (elias < m_elias + 500 * 2) {
        casa_3 = casa_3 - 1;
    } else if (elias >= m_elias + 500 * 2) {
        casa_3 = casa_3 - 0;
    }

    printf("%d vão para a casa1, %d vão para a casa2, %d vão para a casa3", casa_1, casa_2, casa_3);





    return 0;
}
