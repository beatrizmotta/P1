#include <stdio.h>

double aposta(int local, int clima, int torcida, int lesoes, int entrosamento) {
    double chance = 100.00;

    //Lesionados
    chance -= 2.7 * (double)lesoes;
    
    if (local) {
        //Torcida
        if (torcida <= 40000) {
            chance -= torcida * 0.0008;
        } else if (torcida > 40000) {
            chance += torcida * 0.0008;
        }

        //Entrosamento
        if (entrosamento >= 0) {
            chance += entrosamento * 2.7;
        } else {
            chance += entrosamento * 1.8;
        }
        
        //Clima  
        switch (clima)
        {
        case 1:
            //Sol
            chance += 33.21;
            break;
        case 2:
            //Neve
            chance += 10.51;
            break;
        case 3:
            //Chuva  
            chance -= 20.7;
            break;
        default:
            chance = 0.00;
            break;
        }    
    } else {
        //Fora de casa

        //Torcida
        if (torcida > 45000) {
            chance -= torcida * 0.0003;
        } else if (torcida <= 45000) {
            chance -= torcida * 0.0001;
        }

        //Entrosamento
        if (entrosamento >= 0) {
            chance += entrosamento * 5.2;
        } else {
            chance += entrosamento * 1.5;
        }

        //clima
        switch (clima)
        {
        case 1:
            chance -= 10.87;
            break;
        case 2:
            chance = 0;
            break;
        case 3:
            chance = 0;
            break;
        default:
            chance = 0;
            break;
        }
    }
    if (chance <= 100) {
        return chance;
    } else {
        return 100.00;
    }

}


int main() 
{
    int C, T, A, L, E;

    scanf("%d %d %d %d %d", &C, &T, &A, &L, &E);

    printf("A chance de vitoria do flamengo e de %.2lf", aposta(C, T, A, L, E));

    return 0;
}
