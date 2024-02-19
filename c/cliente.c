#include "cliente.h"
#include <stdio.h>
#include <stdlib.h>

//struct para guardar os dados do cliente;
struct cliente
{
    char nome[20];
    char endereco[10];
    int codigoCliente;
};


//função para imprimir os dados do cliente;
void imprimir(struct cliente * usuario)
{
    printf("DADOS\n");
    printf("Nome: %s\n",usuario->nome);
    printf("Endereco: %s\n",usuario->endereco);
    printf("Codigo: %d\n",usuario->codigoCliente);
}

void BuscaCodigo(struct cliente *usuario,int *cod, int *posicao) 
{
    usuario[100];

    while(usuario[*posicao].codigoCliente < *cod)
    {
        *posicao = *posicao + 10;
        printf("usuario: %s\n",usuario[*posicao].nome);
    }
}

//função que irar escolher o tipo de busca;
void pergunta(int * escolha)
{   
    printf("voce ira pesquisar o usuario pelo nome ou pelo codigo\n1 - codigo 2 - nome\n");
    scanf("%d",&*escolha);
}