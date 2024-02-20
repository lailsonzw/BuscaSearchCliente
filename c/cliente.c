#include "cliente.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define Quantidade 100

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
    printf("Codigo: %d\n\n",usuario->codigoCliente);
}

//Adicionando a função que irar buscar o usuario pelo codigo;
void BuscaCodigo(struct cliente *usuario,int *cod, int *posicao) 
{
    int step = sqrt(Quantidade);
    int prev = 0;
    //adicionando uma variavel para guardar os dados de todos clientes;
    usuario[Quantidade];
   
    while (usuario[fmin(step, Quantidade) - 1] < *cod) {
        prev = step;
        step += sqrt(Quantidade);
        if (prev >= *cod)
    }
    while (usuario[prev] < *cod) {
        prev++;
        if (prev == fmin(step, Quantidade))
    }
    if (usuario[prev] == *cod){
        printf("O usuario está no vetor %d\nSeu nome e %s\nseu endereco: %s\nseu codigo",prev,usuario[prev].nome,usuario[prev].endereco,usuario[prev].codigoCliente);
    }        
    
    //ainda falta fazer a logica de jump search;
   
    while(usuario[*posicao].codigoCliente != *cod)
    {
        *posicao += 1;
    } 
    printf("O usuario foi encontrado:\n");
    printf("usuario: %s\n",usuario[*posicao].nome);
    printf("endereco: %s\n",usuario[*posicao].endereco);
    printf("codigo: %d\n",usuario[*posicao].codigoCliente);

}

//função que irar escolher o tipo de busca;
void pergunta(int * escolha)
{   
    printf("voce ira pesquisar o usuario pelo nome ou pelo codigo\n1 - codigo 2 - nome\n");
    scanf("%d",&*escolha);
    system("clear");
    system("cls");
}