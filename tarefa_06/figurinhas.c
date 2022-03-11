#include <stdio.h>

void preencher_array(int tamanho_array, int counter, int array[]) {
    if (tamanho_array == counter) {
        return; 
    } else {
        int num;
        scanf("%d", &num);
        array[counter] = num;
        counter++;
        preencher_array(tamanho_array, counter, array);
    }
}

void qual_praqual(int array[], int array_somas[], int tamanho, int counter, int f_joao, int f_maria, int soma_par, int soma_impar) {
    if (counter == tamanho) {
        printf("%d\n%d\n", f_joao, f_maria);
        array_somas[0] = soma_par;
        array_somas[1] = soma_impar;
        return;
    } else {
        if (array[counter] % 2 == 0) {
            f_joao++;
            if (array[counter] != array[counter+1]) {
                soma_par += array[counter];
            }
        } else {
            f_maria++;
            if (array[counter] != array[counter+1]) {
                soma_impar += array[counter];
            }
        }
        counter++;
        qual_praqual(array, array_somas, tamanho, counter, f_joao, f_maria, soma_par, soma_impar);
    }
}

void reorder(int array[], int counter, int tamanho) {
    int aux;
    if (counter == tamanho) {
        return; 
    } else {
        if (array[counter+1] <= array[counter]) {
            aux = array[counter+1];
            array[counter+1] = array[counter];
            array[counter] = aux;
        } 
        counter++;
        reorder(array, counter, tamanho);
    }

}

int check_if_ordered(int array[], int counter, int tamanho, int isOrdered) {
    if (counter == tamanho) {
        return isOrdered;
    } else {
        if (array[counter+1] < array[counter]) {
            isOrdered++;
        }
        counter++;
        check_if_ordered(array, counter, tamanho, isOrdered);
    }

}


void rearrange(int array[], int isOrdered, int tamanho) {
    if (isOrdered == 1) {
        return;
    } else {
        reorder(array, 0, tamanho);
        isOrdered = check_if_ordered(array, 0, tamanho, 1);
        rearrange(array, isOrdered, tamanho);
    }
}






int main()
{
    int qt_figurinhas;
    scanf("%d", &qt_figurinhas);
    int figuras[qt_figurinhas];

    preencher_array(qt_figurinhas, 0, figuras);
    
    int somas[2];


    reorder(figuras, 0, qt_figurinhas);
    int x = check_if_ordered(figuras, 0, qt_figurinhas, 1);
    rearrange(figuras, x, qt_figurinhas);
    
    qual_praqual(figuras, somas, qt_figurinhas, 0, 0, 0, 0, 0);


    int qt_joao = somas[0];
    int qt_maria = somas[1];
    if (qt_joao > qt_maria) {
        printf("%d\n", qt_joao);
    } else {
        printf("%d", qt_maria);
    }




    return 0;
}