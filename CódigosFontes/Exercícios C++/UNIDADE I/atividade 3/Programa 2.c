#include <stdio.h>

void main() {
    int idade, soma = 0, contador = 0;

    printf("Digite as idades (digite 0 para encerrar):\n");

    do {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade != 0) {
            soma += idade;
            contador++;
        }

    } while (idade != 0);

    if (contador > 0) {
        float media = (float)soma / contador;
        printf("A média das idades é: %.2f\n", media);
    } else {
        printf("Nenhuma idade foi inserida.\n");
    }

    return 0;
}

