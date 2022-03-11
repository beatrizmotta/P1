#include <stdio.h>


void maroto(int arr[], int tamanho, int counter) {
    if (tamanho == counter) {
        return; 
    } else {
        int inimigo_atual;
        scanf("%d", &inimigo_atual);
        arr[counter] = inimigo_atual;
        counter++;
        maroto(arr, tamanho, counter);
    }
}

void reodernar(int arr[], int newArr[], int tamanho, int counter) {
    if (tamanho == counter) {
        return;
    } else {
        int posicao;
        scanf("%d", &posicao);
        newArr[counter] = arr[posicao-1];
        counter++;
        reodernar(arr, newArr, tamanho, counter);
    }
}

void ler(int tamanho, int counter, int arr[]) {
    if (tamanho == counter) {
        return;
    } else {
        printf("%d\n", arr[counter]);
        counter++;
        ler(tamanho, counter, arr);
    }
}

void enfrentar(int nivel, int arr_inimigos[], int results[], int tamanho, int counter, int vitorias) {
    if (tamanho == counter) {
        results[0] = nivel;
        results[1] = vitorias;
        return;
    } else {
        if (arr_inimigos[counter] >= nivel) {
            //Marquinhos foge
            nivel = nivel; 
        } else if (nivel > arr_inimigos[counter]) {
            nivel = nivel + (nivel - arr_inimigos[counter]);
            vitorias++;
        }

        counter++;
        enfrentar(nivel, arr_inimigos, results, tamanho, counter, vitorias);

    }

}

int main() {
    int nivel_marquinhos;
    int inimigos_quantidade; 

    scanf("%d", &nivel_marquinhos);
    scanf("%d", &inimigos_quantidade);

    int inimigos[inimigos_quantidade];
    int inimigos_em_ordem[inimigos_quantidade];

    maroto(inimigos, inimigos_quantidade, 0);
    reodernar(inimigos, inimigos_em_ordem, inimigos_quantidade, 0);

    int results[2];
    enfrentar(nivel_marquinhos, inimigos_em_ordem, results, inimigos_quantidade, 0, 0);
    
    double porcentagem; 
    int vida;
    
    vida = results[0];
    porcentagem = (double)((double)100 * results[1]/(double)inimigos_quantidade);

    printf("Nível de energia: %d\n", vida);
    printf("%.2lf%%\n", porcentagem);
    
    if (vida >= 20000) {
        printf("Marquinhos é o novo Mestre da Vila da Árvore!\n");
    } else {
        printf("Continue tentando!");
    }
    // ler(inimigos_quantidade, 0, inimigos_em_ordem);

    return 0;
}