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

//função para cadastrar o cliente;
void cadastrar(struct cliente * usuario)
{
    printf("Digite seu nome: \n");
    scanf("%s",usuario->nome);
    printf("Digite o endereco deste cliente: \n");
    scanf("%s",usuario->endereco);
    printf("Digite o codigo deste cliente: \n");
    scanf("%d",&usuario->codigoCliente);
}

//função para imprimir os dados do cliente;
void imprimir(struct cliente * usuario)
{
    printf("DADOS\n");
    printf("Nome: %s\n",usuario->nome);
    printf("Endereco: %s\n",usuario->endereco);
    printf("Codigo: %d",usuario->codigoCliente);
}

