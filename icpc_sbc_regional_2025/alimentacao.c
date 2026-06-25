// O número mínimo de alunos que temos que ter por escola é a soma de todas as maiores quantidades de frutas preferidas por sala

#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, m, total_alunos = 0, maior = 0, i, j, **frutas;

    scanf("%d %d", &n, &m);

    frutas = malloc(n*sizeof(int*));

    for (i = 0; i < n; i++) {
        frutas[i] = malloc(m*sizeof(int));
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &frutas[i][j]);
        }
    }

    for (j = 0; j < m; j++) {
        maior = 0;

        for (i = 0; i < n; i++) {
            if (frutas[i][j] > maior) {
                maior = frutas[i][j];
            }
        }

        total_alunos += maior;
    }

    printf("%d", total_alunos);

    for (i = 0; i < n; i++) {
        free(frutas[i]);
    }

    free(frutas);

    return 0;
}
