#include <stdio.h>

int sequencia(int num, int contador) {

    if (num == 1) {
        contador = contador + 1;
        return contador;
    } else {

        int novo_num;
        if (num % 2 == 0) {
            novo_num = num / 2;
        } else {
            novo_num = (num * 3) + 1;
        }

        contador = contador + 1; 
        sequencia(novo_num, contador);
    }


}

void entrenumeros(int n1, int n2, int largest, int n1_saved, int n2_saved) {

    if (n1 == n2) {
        printf("%d %d %d\n", n1_saved, n2_saved, largest);
    } else {



        n1 = n1 + 1; 
        int results = sequencia(n1, 0);

        if (results >= largest) {
            largest = results;
        }

        entrenumeros(n1, n2, largest, n1_saved, n2_saved);

    }



}







void loop(int first) {
    int second;
    if (first != -1) {
      
        int n1, n2;
        second = scanf("%d %d", &n1, &n2);

        int aux1, aux2;

        if (second == -1) {
            //
        } else {
            if (n1 == n2) {

                
                    printf("%d %d %d", n1, n1, sequencia(n1, 0));
                


            } else if (n2 < n1) {
                aux1 = n2;
                aux2 = n1; 
                entrenumeros(aux1, aux2, 0, n1, n2);
                loop(second);
            } else {
                entrenumeros(aux1, aux2, 0, n1, n2);
                loop(second);
            }
        }

    
     } 

}

int main() {
    int x, y, z; 
    scanf("%d", &x);
    
    z = sequencia(x, 0);
    printf("%d", z);

    return 0;
}
