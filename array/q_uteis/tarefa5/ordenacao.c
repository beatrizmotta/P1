#include <stdio.h>

void preenchendo(int array[], int tamanho, int counter) {
    
    if (counter == tamanho) {
        return;
    } else {
        int p;
        scanf("%d", &p);
        array[counter] = p;
        counter++;
        preenchendo(array, tamanho, counter);
    }
}

void bubblesort(int array[], int tamanho, int counter) {
    int aux1;
    if (counter == tamanho - 1) {
        return;
    } else {
        // counter = 0 - 1
        if (array[counter] >= array[counter+1]) {
            aux1 = array[counter];
            array[counter] = array[counter+1];
            array[counter+1] = aux1;
        } 

        if (counter != 0) {
            
            if (array[counter] <= array[counter-1]) {
                aux1 = array[counter];
                array[counter] = array[counter-1];
                array[counter-1] = aux1;
            }

        }

        counter++;
        bubblesort(array, tamanho, counter);


    }
}

void lerArray(int arr[], int tamanho, int counter) {
    if (tamanho == counter) {
        return;
    } else {
        printf("[%d]", arr[counter]);
        counter++;
        lerArray(arr, tamanho, counter);
    }
}


int main() {
    int n;
    scanf("%d", &n);

    int numeros[n];
    preenchendo(numeros, n, 0);

    bubblesort(numeros, n, 0);
    bubblesort(numeros, n, 0);
    bubblesort(numeros, n, 0);
    bubblesort(numeros, n, 0);
    bubblesort(numeros, n, 0);
    bubblesort(numeros, n, 0);
    bubblesort(numeros, n, 0);
    bubblesort(numeros, n, 0);
    bubblesort(numeros, n, 0);

    lerArray(numeros, n, 0);



    return 0;
}