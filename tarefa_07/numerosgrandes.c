#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho(char numero[], int counter) {
    if (numero[counter] == '\0') {
        return counter-1;
    } else {
        counter++;
        tamanho(numero, counter);
    }
}

void diminuir_array(char old_array[], char new_array[], int tamanho, int counter) {
    if (counter == tamanho) {
        return;
    } else {
        char num[1];
        num[0] = old_array[counter];
        if (atoi(num) == 0) {
            new_array[counter] = '0';
        } else {
            new_array[counter] = old_array[counter];
        }

        counter++;
        diminuir_array(old_array, new_array, tamanho, counter);
    }
}

void adicionar_zeros(char old_array[], char new_array[], int stop, int tamanho, int counter) {
    if (counter == tamanho) {
        return;
    } else {
        if (counter < stop) {
            new_array[counter] = '0';
        } else {
            new_array[counter] = old_array[counter - stop];
        }
        counter++;
        adicionar_zeros(old_array, new_array, stop, tamanho, counter);
    }

}

void copy(char old_array[], char new_array[], int tamanho, int counter) {
    if (counter == tamanho) {
        return; 
    } else {
        new_array[counter] = old_array[counter];
        counter++;
        copy(old_array, new_array, tamanho, counter);
    }
}


void ler_char(char array[], int tamanho, int counter) {
    if (counter == tamanho) {
        return; 
    } else {
        printf("%c ", array[counter]);
        counter++;
        ler_char(array, tamanho, counter);
    }
} 

void ler_int(int array[], int tamanho, int counter) {
    if (counter == tamanho) {
        return; 
    } else {
        printf("%d", array[counter]);
        counter++;
        ler_int(array, tamanho, counter);
    }
} 

void soma(char array_1[], char array_2[], int array_final[], int contador, int extra) {
    if (contador == -1) {
        return;
    } else {
        char num1[2] = {array_1[contador], 'x'};
        char num2[2] = {array_2[contador], 'x'};
        
        int a = atoi(num1);
        int b = atoi(num2);

        // printf("\n%d + %d\n", a, b);

        int valor = a + b + extra;

        int newValor; 
        
        if (valor >= 10 && contador == 0) {
            newValor = valor;
            array_final[contador] = newValor;
            // printf("\n = %d \n", newValor);
        } else {
            if (valor >= 10) {
                newValor = valor%10;
                extra = valor/10;
                array_final[contador] = newValor;
                // printf("\n = %d \n", newValor);
            } else {
                newValor = valor;
                extra = 0;
                array_final[contador] = newValor;
                // printf("\n = %d \n", newValor);
            }

        }
        
        contador--;
        soma(array_1, array_2, array_final, contador, extra);


    }   


}

int main() 
{   
    const int MAX = 10001;
    char n1_unmodified[MAX];
    char n2_unmodified[MAX];

    // Como criamos as arrays com tamanho de 255, precisamos transformá-las em arrays menores. 

    fgets(n1_unmodified, MAX, stdin);
    fgets(n2_unmodified, MAX, stdin);

    // Começamos pegando o tamanho de cada array
    
    int tamanho_n1 = tamanho(n1_unmodified, 0);
    int tamanho_n2 = tamanho(n2_unmodified, 0);

    int tamanho_maior; 
    
    if (tamanho_n1 >= tamanho_n2) {
        tamanho_maior = tamanho_n1;
    } else {
        tamanho_maior = tamanho_n2;   
    }

    // Criamos as novas arrays, que vão possuir o tamanho "tamanho_maior"

    char n1_padronized[tamanho_maior];
    char n2_padronized[tamanho_maior];
    

    diminuir_array(n1_unmodified, n1_padronized, tamanho_maior, 0);
    diminuir_array(n2_unmodified, n2_padronized, tamanho_maior, 0);

    // Agora vamos adicionar os zeros necessários para a nossa conta 

    char n1_final[tamanho_maior];
    char n2_final[tamanho_maior];

    if (tamanho_n1 >= tamanho_n2) {
        // Caso o n1 seja o maior, apenas fazemos uma cópia dessa array

        copy(n1_padronized, n1_final, tamanho_maior, 0);
        adicionar_zeros(n2_padronized, n2_final, (tamanho_maior - tamanho_n2), tamanho_maior, 0);
    
    } else if (tamanho_n1 < tamanho_n2) {
        // O mesmo para n2
    
        adicionar_zeros(n1_padronized, n1_final, (tamanho_maior - tamanho_n1), tamanho_maior, 0);
        copy(n2_padronized, n2_final, tamanho_maior, 0);
    
    }
    
    
    // Agora criamos uma array com o tamanho padronizado ao qual chegamos 
    int array_soma[tamanho_maior];
    soma(n1_final, n2_final, array_soma, tamanho_maior-1, 0);
    
    ler_char(n1_final, tamanho_maior, 0);
    printf("\n");
    ler_char(n2_final, tamanho_maior, 0);
    printf("\n");
    ler_int(array_soma, tamanho_maior, 0);
    
    return 0;
    }


