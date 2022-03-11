
#include <stdio.h>

void chamando_os_clientes(double array[], int tamanho, int counter) {
    
    if (counter == tamanho) {
        return;
    } else {
        double p;
        scanf("%lf", &p);
        array[counter] = p;
        counter++;
        chamando_os_clientes(array, tamanho, counter);
    }
}

void bubblesort(double array[], int tamanho, int counter) {
    double aux1;
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

void lerArray(double arr[], int tamanho, int counter) {
    if (tamanho == counter) {
        return;
    } else {
        printf("%0.2lf\n", arr[counter]);
        counter++;
        lerArray(arr, tamanho, counter);
    }
}

void ambrosina(double arr[]) {
    
    double aux1, aux2;
    aux1 = arr[1];
    aux2 = arr[3];
    arr[1] = arr[2];
    // 1 3 4 2
    arr[2] = aux2;
    arr[3] = aux1;

}

int main() {
    int tamanho_foto = 4;
    double foto[tamanho_foto];
    chamando_os_clientes(foto, tamanho_foto, 0);
    bubblesort(foto, tamanho_foto, 0);
    bubblesort(foto, tamanho_foto, 0);
    
    
    ambrosina(foto);
    lerArray(foto, tamanho_foto, 0);



    return 0;
}