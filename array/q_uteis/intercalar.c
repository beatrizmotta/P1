#include <stdio.h>

/*

n = vai dizer o tamanho do array 
em seguida = vão os números que vão ocupar os arrays

Ex: n = 6
n / 2 = 3 para cada array 

scanf() = array1[0], array1[1] ...
scanf() = array2[0], array2[1] ...

Agora, temos que imprimir os elementos intercalados:
array1[0]
array2[0]


*/

#include <stdio.h>

void preencherArray(int arr[], int tamanho, int counter) {
    
    if (counter == tamanho) {
        return;
    } else {
        int x; 
        scanf("%d", &x);
        arr[counter] = x; 
        counter = counter + 1;
        preencherArray(arr, tamanho, counter);
    }
    

}

void lerArray(int tamanho, int counter, int arr1[], int arr2[]) {
    if (tamanho == counter) {
        // 
    } else {
        printf("%d\n%d\n", arr1[counter], arr2[counter]);
        counter = counter + 1;
        lerArray(tamanho, counter, arr1, arr2);
    }
}


int main() {
    int tamanho_array;
    scanf("%d", &tamanho_array);

    int arr1[tamanho_array];
    int arr2[tamanho_array];
    preencherArray(arr1, tamanho_array, 0);
    preencherArray(arr2, tamanho_array, 0);
    lerArray(tamanho_array, 0, arr1, arr2);

    return 0;
}