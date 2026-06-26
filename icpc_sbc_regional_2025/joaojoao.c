#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, qtde = 4, um = 0, dois = 0, tres = 0, quatro = 0, difs[10];

    for (i = 0; i < 10; i++) {
        scanf("%d", &difs[i]);

        if (difs[i] > 4 || difs[i] < 1) {
            printf("Insira uma dificuldade valida.");
            return 1;
        }
    }

    for (i = 0; i < 10; i++) {
        if (difs[i] == 1) {
            um = 1;
        } else if (difs[i] == 2) {
            dois = 1;
        } else if (difs[i] == 3) {
            tres = 1;
        } else if (difs[i] == 4) {
            quatro = 1;
        }
    }

    qtde -= um + dois + tres + quatro; 

    printf("Faltam %d dificuldades.", qtde);

    return 0;
}