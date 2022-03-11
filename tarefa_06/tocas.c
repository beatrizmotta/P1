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





int main()
{
    int num_tocas;
    scanf("%d", &num_tocas);
    int tocas[num_tocas];
    int visitadas[num_tocas];

    preencher_array(num_tocas, 0, tocas);

    return 0;
}