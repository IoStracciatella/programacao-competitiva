// É dado uma quantidade de pizzas n, e uma quantidade de pessoas m. Queremos fazer um programa que determina o máximo de pedaços
// de pizza que cada pessoa pode comer, sem nunca dividir um pedaço.

// Todas as pizzas tem 8 pedaços.

// Por exemplo, se há 2 pizzas e 3 pessoas, isso quer dizer que há 16 pedaços no total e que cada um
// pode comer no máximo 5 pedaços (acaba sobrando 1 pedaço).

// O funcionamento do programa é muito simples: Calculamos o resto da divisão do número de pedaços de pizza pela qtde de pessoas, e subtraimos
// esse resto da qtde de pedaços de pizza. Assim, a quantidade de pedaços de pizza se torna divisivel pelo numero de pessoas. E o resto, naturalmente
// ja foi descartado (subtraido), então, apenas dividimos a qtde de pedaços de pizza pelo numero de pessoas. Pronto.


#include <stdio.h>

int main () {
    int n, m, resto, qtde;

    scanf("%d %d", &n, &m);

    if (n < 1 || m < 1) {
        printf("Insira um valor valido.");
        return 1;
    } else if (n > 100 || m > 20) {
        printf("Insira um valor valido.");
        return 1;
    }

    n = n * 8;
    resto = n % m;
    n -= resto;
    qtde = n / m;

    printf("%d", qtde);

    return 0;
}