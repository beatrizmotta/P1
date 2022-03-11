#include <stdio.h>

int main()
{
    int i, j;
    for (i = 65; i <= 71; i++) {
        if (i == 0) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    for (i = 70; i >= 65; i--) {
        if (i == 0) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    printf("\n");

    for (i = 65; i <= 71; i++) {
        if (i == 71) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    for (i = 70; i >= 65; i--) {
        if (i == 0) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    printf("\n");

    for (i = 65; i <= 71; i++) {
        if (i == 71 || i == 70) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    for (i = 70; i >= 65; i--) {
        if (i == 70) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    printf("\n");

    for (i = 65; i <= 71; i++) {
        if (i == 71 || i == 70 || i == 69) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    for (i = 70; i >= 65; i--) {
        if (i == 70 || i == 69) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    printf("\n");

    for (i = 65; i <= 71; i++) {
        if (i == 71 || i == 70 || i == 69 || i == 68) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    for (i = 70; i >= 65; i--) {
        if (i == 70 || i == 69 || i == 68) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    printf("\n");

    for (i = 65; i <= 71; i++) {
        if (i == 71 || i == 70 || i == 69 || i == 68 || i == 67) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    for (i = 70; i >= 65; i--) {
        if (i == 70 || i == 69 || i == 68 || i == 67) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }
    
    printf("\n");

    for (i = 65; i <= 71; i++) {
        if (i == 71 || i == 70 || i == 69 || i == 68 || i == 67 || i == 66) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }

    for (i = 70; i >= 65; i--) {
        if (i == 70 || i == 69 || i == 68 || i == 67 || i == 66) {
            printf("  ");
        } else {
            printf("%c ", i);
        }
    }
    return 0;
}