// Código que imprime a bandeira de São Paulo

#include <stdio.h>

int main () {

    int n, i, j;

    scanf("%d", &n);

    // ============================ PARTE 1 ================================

    for (i = 0; i < n; i++) {
        printf(" ");
    }

    for (i = 0; i < n + 1; i++) {
        printf("_");
    }

    printf("\n");

    // ============================ PARTE 2 ================================

    if (n > 1) {

        for (j = 0; j < n - 1; j++) {
            for (i = 0; i < n - 1 - j; i++) {
                printf(" ");
            }

            printf("/");

            for (i = 0; i < n + 1 + (j * 2); i++) {
                printf(" ");
            }

            printf("\\");

            printf("\n");
        }
    }

    // ============================ PARTE 3 ================================

    printf("/");

    for (i = 0; i < n; i++) {
        printf("_");
    }

    for (i = 0; i < (n * 2) - 1; i++) {
        printf(" ");
    }

    printf("\\");

    for (i = 0; i < n + 1; i++) {
        printf("_");
    }

    printf("\n");

    // ============================ PARTE 4 ================================

    if (n > 1) {

        for (j = 0; j < n - 1; j++) {
            for (i = 0; i < n + 2 + j; i++) {
                printf(" ");
            }

            printf("\\");

            for (i = 0; i < (n * 2) + n - 1  - (j * 2); i++) {
                printf(" ");
            }

            printf("/");

            printf("\n");
        }
    }

    // ============================ PARTE 5 ================================

    for (i = 0; i < (n * 2) +  1; i++) {
        printf(" ");
    }

    printf("\\");

    for (i = 0; i < n + 1; i++) {
        printf("_");
    }

    printf("/");

    return 0;
}