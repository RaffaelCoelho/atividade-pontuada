// Implemente um programa que permita cadastrar contatos telefônicos em uma agenda,
// utilizando vetores para armazenar os nomes e números de telefone.
// Permita que o usuário digite o código 1 para adicionar um número e 2 para mostrar os números cadastrados e encerrar o software.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    // Exibição de variaveis

    char nomes[50][200];
    float telefones[50];
    int codigo;
    int i;
    int contador = 0;
    // area de trabalho

    for (i = 0; i < 50; i++)
    {

        printf("\nVoc� deseja inserir algum numero a sua agenda? Digite (1) se sim, digite (2) se deseja encerrar:");
        scanf("%d", &codigo);

        if (codigo == 1)
        {

            fflush(stdin);
            
            contador++;

            printf("Digite o %d� nome:", i + 1);
            gets(nomes[i]);

            fflush(stdin);
            
            printf("Digite o %d� numero de telefone:", i + 1);
            scanf("%f", &telefones[i]);
        }

        fflush(stdin);
        
        if (codigo == 2)
        {
            for (i = 0; i < contador; i++){
            
                fflush(stdin);
            
                printf("\nO %d� nome: %s \nde numero: %0.f", i + 1, nomes[i], telefones[i]);
            }
         abort();
        }

     
     
    }

    return 0;
}