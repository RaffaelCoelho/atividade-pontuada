// Crie um software que leia 5 números inteiros e, em seguida, mostre na tela:
// A quantidade de números ímpares;
// A quantidade de números negativos;
// O maior e o menor número;
// A média de números pares;
// A média de números inseridos.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int tamanhonumeros = 5;
    int numeros[tamanhonumeros];
    int i;
    int contadorimpar = 0;
    int contadornegativo = 0;
    int maiornumero = 0;
    int menornumero = 9999;
    float mediatotal = 0;
    int somapar = 0;
    int somatotal = 0;
    float mediapar = 0;

    for (i = 0; i < tamanhonumeros; i++)
    {
        printf("\nDigite um numero:");
        scanf("%d", &numeros[i]);

        somatotal = somatotal + numeros[i];

        if (numeros[i] % 2 != 0)
        {
            contadorimpar++;
        }
        else
        {
            somapar = somapar + numeros[i];
        }

        if (numeros[i] < 0)
        {
            contadornegativo++;
        }

        if (numeros[i] > maiornumero)
        {
            maiornumero = numeros[i];
        }

        if (numeros[i] < menornumero)
        {
            menornumero = numeros[i];
        }

        mediapar = somapar / tamanhonumeros;
        mediatotal = somatotal / tamanhonumeros;
    }

    printf("\n Quantidade de numeros impares: %d", contadorimpar);
    printf("\n Quantidade de numeros negativos: %d", contadornegativo);
    printf("\n Maior numero: %d", maiornumero);
    printf("\n Menor numero: %d", menornumero);
    printf("\n Media par: %f", mediapar);
    printf("\n Media total: %f", mediatotal);
}
