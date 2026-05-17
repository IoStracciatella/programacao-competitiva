#include <stdio.h>

int main() {
    int reinos, pos, posicoes_x[50], posicoes_y[50], dentro_x[50], dentro_y[50];

    pos = 0;
    scanf("%d", &reinos);
    
    for (int i = 0; i < reinos; i++) {
        scanf("%d", &posicoes_x);
        scanf("%d", &posicoes_y);
    }

    for (int i = 0; i < reinos; i++) {
        if (posicoes_x[i] < posicoes_x[i+1] && posicoes_x[i] > posicoes_x[i+2]) {
            dentro_x[i] = 1;
        } else if (posicoes_x[i] > posicoes_x[i+1] && posicoes_x[i] < posicoes_x[i+2]) {
            dentro_x[i] = 1;
        } else {
            dentro_x[i] = 0;
        }
    }

    for (int i = 0; i < reinos; i++) {
        if (posicoes_y[i] < posicoes_y[i+1] && posicoes_y[i] > posicoes_y[i+2]) {
            dentro_y[i] = 1;
        } else if (posicoes_y[i] > posicoes_y[i+1] && posicoes_y[i] < posicoes_y[i+2]) {
            dentro_y[i] = 1;
        } else {
            dentro_y[i] = 0;
        }
    }

    for (int i = 0; i < reinos; i++) {
        printf("%d", dentro_x[i]);
    }

    printf("\n");
    
    for (int i = 0; i < reinos; i++) {
        if (dentro_x[i] == 0 || dentro_y[i] == 0) {
            printf("%d ", i+1);
        }
    }

    return 0;
}