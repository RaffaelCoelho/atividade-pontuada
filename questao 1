// Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores. Mostre as informações solicitadas de cada pessoa e informe:
// A maior altura e a menor altura.
// O maior peso e menor peso;
// A maior idade e a menor idade.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int tamanholinha = 4;
    int tamanhocoluna = 2;
    int i; // linha idade/peso/altura
    int j; // coluna nomes
    char nomes[tamanhocoluna][200];
    int idade[tamanhocoluna][tamanholinha];
    float peso[tamanhocoluna][tamanholinha];
    float altura[tamanhocoluna][tamanholinha];
    float maioraltura = 0;
    float menoraltura = 999;
    float maiorpeso = 0;
    float menorpeso = 999;
    int maioridade = 0;
    int menoridade = 999;

    for (j = 0; j < tamanhocoluna; j++)
    {
        fflush(stdin);
        printf("\nDigite o nome da %dº pessoa:", j + 1);
        gets(nomes[j]);

        fflush(stdin);

        for (i = 0; i < 1; i++)
        {
            fflush(stdin);

            printf("\nDigite a idade da %dº pessoa:", j + 1);
            scanf("%d", &idade[j][i]);

            fflush(stdin);

            printf("\nDigite o peso da %dº pessoa:", j + 1);
            scanf("%f", &peso[j][i]);

            fflush(stdin);

            printf("\nDigite a altura da %dº pessoa:", j + 1);
            scanf("%f", &altura[j][i]);

            if (idade[j][i] > maioridade)
            {
                maioridade = idade[j][i];
            }

            if (idade[j][i] < menoridade)
            {
                menoridade = idade[j][i];
            }

            if (peso[j][i] > maiorpeso)
            {
                maiorpeso = peso[j][i];
            }

            if (peso[j][i] < menorpeso)
            {
                menorpeso = peso[j][i];
            }

            if (altura[j][i] > maioraltura)
            {
                maioraltura = altura[j][i];
            }

            if (altura[j][i] < menoraltura)
            {
                menoraltura = altura[j][i];
            }
        }
    }

    // exibição das pessoas
    printf("\nExibindo dados das pessoas...\n");

    printf("\n Maior idade: %d", maioridade);
    printf("\n Menor idade: %d", menoridade);
    printf("\n Maior peso: %f", maiorpeso);
    printf("\n Menor peso: %f", menorpeso);
    printf("\n Maior altura: %f", maioraltura);
    printf("\n Menor altura: %f", menoraltura);

    return 0;
}
