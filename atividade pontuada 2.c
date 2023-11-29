// Crie um programa que faça o cadastro de 5 alunos em uma escola, armazenando seus dados como:
// nome, idade e  3 notas  para cada aluno. Ao final, mostre todos os dados dos alunos como: nome, idade, as notas e a média. Após calcular a média,
// verifique para cada aluno se este estará aprovado (média maior ou igual a 7,0), em recuperação (média menor que 7,0 e maior ou igual a 5,0) ou reprovado (média menor que 5,0)
// com base nestes critérios.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int tamanholinha = 4;
    int tamanhocoluna = 2;
    int i; // linha idade/nota1/nota2/nota3
    int j; // coluna nomes
    char nomes[tamanhocoluna][200];
    int idade[tamanhocoluna][tamanholinha];
    float nota1[tamanhocoluna][tamanholinha];
    float nota2[tamanhocoluna][tamanholinha];
    float nota3[tamanhocoluna][tamanholinha];
    float media[2];

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

            printf("\nDigite o primeira nota da %dº pessoa:", j + 1);
            scanf("%f", &nota1[j][i]);

            fflush(stdin);

            printf("\nDigite a segunda nota da %dº pessoa:", j + 1);
            scanf("%f", &nota2[j][i]);

            printf("\nDigite a terceira nota da %dº pessoa:", j + 1);
            scanf("%f", &nota3[j][i]);
            fflush(stdin);
            
         media[i] = (nota1[j][i] + nota2[j][i] + nota3[j][i]) / 3;
        }
      
    }

    for (j = 0; j < tamanhocoluna; j++)
    {
        fflush(stdin);
        printf("\nNome do %dº Aluno: %s", j + 1, nomes[j]);
        fflush(stdin);
        for (i = 0; i < 1; i++)
        {

            fflush(stdin);
            if (media[i] >= 7)
            {
                printf("\nAprovado!!");
            }
            fflush(stdin);
            if (media[i] < 7 && media[i] >= 5)
            {
                printf("\nDe recuperação");
            }
            fflush(stdin);
            if (media[i] < 5)
            {
                printf("\nReprovado");
            }
            fflush(stdin);
         printf("\nmedia: %2.f" , media[i]);
        }
    }

    return 0;
}