#include <stdio.h>


int main()
{

    int l1, l2, l3, l4, l5, l6, l7;
    int p1, p2, p3, p4, p5, p6, p7;

    scanf("%d %d", &l1, &p1);
    scanf("%d %d", &l2, &p2);
    scanf("%d %d", &l3, &p3);
    scanf("%d %d", &l4, &p4);
    scanf("%d %d", &l5, &p5);
    scanf("%d %d", &l6, &p6);
    scanf("%d %d", &l7, &p7);

    int dias_programas = 0;
    int dias_linhas = 0;
    int dia_mais_produziu;

    // Contanto dias que bateu a meta de linhas
    if (l1 >= 100) {
        dias_linhas++;
    }
    if (l2 >= 100) {
        dias_linhas++;
    }
    if (l3 >= 100) {
        dias_linhas++;
    }
    if (l4 >= 100) {
        dias_linhas++;
    }
    if (l5 >= 100) {
        dias_linhas++;
    }
    if (l6 >= 100) {
        dias_linhas++;
    }
    if (l7 >= 100) {
        dias_linhas++;
    }

    // Contanto dias que bateu a meta de programas
    if (p1 >= 5) {
        dias_programas++;
    }
    if (p2 >= 5) {
        dias_programas++;
    }
    if (p3 >= 5) {
        dias_programas++;
    }
    if (p4 >= 5) {
        dias_programas++;
    }
    if (p5 >= 5) {
        dias_programas++;
    }
    if (p6 >= 5) {
        dias_programas++;
    }
    if (p7 >= 5) {
        dias_programas++;
    }
    
    int t1 = l1 * l1;
    int t2 = l2 * l2;
    int t3 = l3 * l3;
    int t4 = l4 * l4;
    int t5 = l5 * l5;
    int t6 = l6 * l6;
    int t7 = l7 * l7;
    
    if (t1 == t2 && t2 == t3 && t3 == t4 && t5 == t6 && t6 == t7) {
        dia_mais_produziu = 1;
    } else {
        if (t1 > t2 && t1 > t3 && t1 > t4 && t1 > t5 && t1 > t6 && t1 > t7) {
            dia_mais_produziu = 1;
        } else if (t2 > t1 && t2 > t3 && t2 > t4 && t2 > t5 && t2 > t6 && t2 > t7) {
            dia_mais_produziu = 2;
        } else if (t3 > t1 && t3 > t2 && t3 > t4 && t3 > t5 && t3 > t6 && t3 > t7) {
            dia_mais_produziu = 3;
        } else if (t4 > t1 && t4 > t2 && t4 > t3 && t4 > t5 && t4 > t6 && t4 > t7) {
            dia_mais_produziu = 4;
        } else if (t5 > t1 && t5 > t3 && t5 > t4 && t5 > t2 && t5 > t6 && t5 > t7) {
            dia_mais_produziu = 5;
        } else if (t6 > t1 && t6 > t3 && t6 > t4 && t6 > t5 && t6 > t2 && t6 > t7) {
            dia_mais_produziu = 6;
        } else if (t7 > t1 && t7 > t3 && t7 > t4 && t7 > t5 && t7 > t6 && t7 > t2) {
            dia_mais_produziu = 7;
        }
    }

    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", dias_programas);
    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", dias_linhas);
    printf("DIA QUE MAIS PRODUZIU: ");

    switch (dia_mais_produziu)
    {
    case 1:
        printf("DOMINGO");
        break;
    case 2:
        printf("SEGUNDA");
        break;
    case 3:
        printf("TERÇA");
        break;
    case 4:
        printf("QUARTA");
        break;
    case 5:
        printf("QUINTA");
        break;
    case 6:
        printf("SEXTA");
        break;
    case 7:
        printf("SABADO");
        break;
    
    default:
        break;
    }




    return 0;
}