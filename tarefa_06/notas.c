#include <stdio.h>

void pegar_notas(int num_aluno, int qt_alunos, char gabarito[], int notas[], int al_e_aprov[], int aprovados) {
    if (num_aluno == 9999) {
        al_e_aprov[0] = aprovados;
        al_e_aprov[1] = qt_alunos;
        return;
    } else {
        char respostas[10];
        scanf("%d", &num_aluno);
        
        if (num_aluno == 9999) {
            return pegar_notas(num_aluno, qt_alunos, gabarito, notas, al_e_aprov, aprovados);
        } else {
            qt_alunos++;
            scanf("%s", respostas); 
            int pontuacao = comparar(gabarito, respostas, 0, 0);
            printf("%d %d.0\n", num_aluno, pontuacao);

            if (pontuacao >= 6) {   
                aprovados++;
            }

            switch (pontuacao)
            {
            case 0:
                notas[0]++;
                break;
            case 1:
                notas[1]++;
                break;
            case 2:
                notas[2]++;
                break;
            case 3:
                notas[3]++;
                break;
            case 4:
                notas[4]++;
                break;
            case 5:
                notas[5]++;
                break;
            case 6:
                notas[6]++;
                break;
            case 7:
                notas[7]++;
                break;
            case 8:
                notas[8]++;
                break;
            case 9:
                notas[9]++;
                break;
            case 10:
                notas[10]++;
                break;
        
            default:
                break;
            }

            pegar_notas(1, qt_alunos, gabarito, notas, al_e_aprov, aprovados);
        }

    }
}


int comparar(char gabarito[], char respostas[], int counter, int resultado) {
    if (counter == 10) {
        return resultado;
    } else {
        if (respostas[counter] == gabarito[counter]) {
            resultado++;
        }
        counter++;
        comparar(gabarito, respostas, counter, resultado);
    }
}



void ler(int array[], int tamanho, int counter) {
    if (counter == tamanho) {
        return; 
    } else {
        printf("%d\n", array[counter]);
        counter++;
        ler(array, tamanho, counter);
    }
} 

int qual_maior_freq(int array[], int tamanho, int counter, int maior) {
    if (counter == tamanho) {
        // Vai retornar a posição que possui mais 
        return maior;
    } else {
        if (array[counter] >= array[maior]) {
            maior = counter;
        }
        counter++;
        qual_maior_freq(array, tamanho, counter, maior);
    }
}



int main()
{
    char gabarito[10];
    scanf("%s", gabarito);

    int notas[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    int quantidade_de_alunos_e_aprov[2];
    pegar_notas(1, 0, gabarito, notas, quantidade_de_alunos_e_aprov, 0);


    // Printar a porcentagem de aprovados 
    int aprovados = quantidade_de_alunos_e_aprov[0];
    int qt_alunos = quantidade_de_alunos_e_aprov[1];

    float p_aprovados = (float)(100 * aprovados)/(float)qt_alunos;
    
    ler(notas, 11, 0);

    //Achar qual nota saiu com maior frequencia
    int x = qual_maior_freq(notas, 11, 0, 0);

    printf("\n O index do número de maior freq: %d \n", x);


    // printf("%d %d\n", aprovados, qt_alunos);
    printf("%.1f%%\n", p_aprovados);




    return 0;
}


