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

void printar_inverso(int array[], int counter) {
    if (counter < 0) {
        return;
    } else {
        printf("%d ", array[counter]);
        counter--;
        printar_inverso(array, counter);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    
    preencher_array(n, 0, array);
    printar_inverso(array, n-1);

    return 0;
}