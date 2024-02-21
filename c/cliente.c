#include "cliente.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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
int jump_search(struct cliente *usuario, int n, int cod)
{
   int i, j, m, k;
   i = 0;
   m = sqrt(n);
   k = m;
   while(usuario[m].codigoCliente <= cod && m < n) {
      i = m;
      m += k;
      if(m > n - 1)
         return -1;
   }

   // linear search on the block
   for(j = i; j<m; j++) {
      if(usuario[j].codigoCliente == cod)
         pritnf("o usuario do codigo %d esta na posicao %d",cod,j);
         return j;
   }
   return -1;
}

//função que irar escolher o tipo de busca;
void pergunta(int * escolha)
{   
    printf("voce ira pesquisar o usuario pelo nome ou pelo codigo\n1 - codigo 2 - nome\n");
    scanf("%d",&*escolha);
    system("clear");
    system("cls");
}