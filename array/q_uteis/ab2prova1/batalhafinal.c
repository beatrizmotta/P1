#include <stdio.h>

void escanear(int tamanho, int counter, int arr[]) {
    if (tamanho == counter) {
        return;
    } else {
        int valor;
        scanf("%d", &valor);
        arr[counter] = valor; 
        counter++;
        escanear(tamanho, counter, arr);
    }

}



int calcular_frequencia(int tamanho, int counter, int number, int arr[], int appareances) {
    if (tamanho == counter) {
        return appareances;
    } else { 
        if (arr[counter] == number) {
            appareances++;
        }
        counter++;
        calcular_frequencia(tamanho, counter, number, arr, appareances);
    }
}

void freq_array(int tamanho, int counter, int arr[], int new_arr[], int all_equal, int largest, int res[]) {
    if (tamanho == counter) {
        res[0] = all_equal;
        res[1] = largest;
        return;
    } else {
        int appareances = calcular_frequencia(tamanho, 0, arr[counter], arr, 0);
        new_arr[counter] = appareances;

        if (arr[counter] >= largest) {
            largest = arr[counter];
        } 

        if (new_arr[counter] == 1 && new_arr[counter+1] == 1) {
            all_equal = 1;
        } else {
            all_equal = 0;
        }

        counter++;
        freq_array(tamanho, counter, arr, new_arr, all_equal, largest, res);
    }
}

int achar_mais_frequente(int tamanho, int counter, int arr_freq[], int largest) {
    if (tamanho == counter) {
        return largest;
    } else {
        if (arr_freq[counter] >= largest) {
            largest = counter;
        }
        counter++;
        achar_mais_frequente(tamanho, counter, arr_freq, largest);
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

void loop(int tamanho, int counter, int v_pedro, int v_tulio, int arr_v[]) {
    
    if (tamanho == counter) {
        arr_v[0] = v_pedro;
        arr_v[1] = v_tulio;
        return;
    } else {
        int tamanho_pedro, tamanho_tulio;
        scanf("%d %d", &tamanho_pedro, &tamanho_tulio);
        
        int array_pedro[tamanho_pedro];
        escanear(tamanho_pedro, 0, array_pedro);
        int freq_pedro[tamanho_pedro];
        int equal_p[2];
        freq_array(tamanho_pedro, 0, array_pedro, freq_pedro, 0, 0, equal_p);
        int x = achar_mais_frequente(tamanho_pedro, 0, freq_pedro, 0);
        
        int array_tulio[tamanho_tulio];
        escanear(tamanho_tulio, 0, array_tulio);
        int freq_tulio[tamanho_tulio];
        int equal_t[2];
        freq_array(tamanho_tulio, 0, array_tulio, freq_tulio, 0, 0, equal_t);
        int y = achar_mais_frequente(tamanho_tulio, 0, freq_tulio, 0);

        if (array_pedro[x] > array_tulio[y]) {
            v_pedro++;
        } else if (array_pedro[x] < array_tulio[y]) {
            v_tulio++;
        } else if (array_pedro[x] == array_pedro[y]) {
            v_pedro++;
            v_tulio++;
        }

        if (equal_p[0] = 0) {
            printf("pedro: %d ", array_pedro[x]);
        } else {
            printf("pedro: %d ", equal_p[1]);
        }
        
        if (equal_t[0] == 0) {
            printf("tulio: %d\n", array_tulio[y]);
        } else {
            printf("tulio: %d\n", equal_t[1]);
        }

        
        counter++;
        loop(tamanho, counter, v_pedro, v_tulio, arr_v);
    }


}

int main() {
    int numero_rodadas;

    scanf("%d", &numero_rodadas);

    int arr_vitorias[2];
    loop(numero_rodadas, 0, 0, 0, arr_vitorias);

    if (arr_vitorias[0] > arr_vitorias[1]) {
        printf("Pedro foi vitorioso com %d pontos", arr_vitorias[0]);
    } else if (arr_vitorias[0] < arr_vitorias[1]) {
        printf("Túlio foi vitorioso com %d pontos", arr_vitorias[1]);
    } else if (arr_vitorias[0] == arr_vitorias[1]) {

        printf("Tulio e Pedro empataram com com %d pontos", arr_vitorias[1]);
    }
    // escanear(tamanho_tulio-1, 0, array_tulio);


    return 0; 
}