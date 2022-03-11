#include <stdio.h>

int main() {
    unsigned char ch; 
    for (ch = 0; ch < 255; ch++) {
        printf("%u ", ch);
    }

    return 0;
}