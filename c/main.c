#include "cliente.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "math.h"

#define NomeArquivo "dados.txt"
#define Quantidade 100

int main(void)
{
    //variavel que irar guardar os dados do cliente;
    cliente cliente[Quantidade];
    //variavel que irar ler a lista e posteriormente passar os dados da lista para a variavel cliente;
    FILE * entrada;
    //variavel para guardar a posição do usuario pesquisado;
    int posicao = 0;
    //variavel para permitir o usuario fazer escolha;
    int escolha = 0;
    //variavel que irar guardar o codigo do usuario;
    int cod = 0;
    //variavel usada em estrutura de repeticao;
    int ordem = 0;

    entrada = fopen(NomeArquivo,"rt");

    printf("lendo dados.\n");
    sleep(1);
    printf("lendo dados..\n");
    sleep(1);
    printf("lendo dados...\n\n");
    sleep(1);

    system("clear");
    //verificando se o arquivo foi lido com sucesso;
    if(entrada == NULL)
    {
        printf("nao foi possivel ler o arquivo!!!\n");
        exit(1);
    }
    else
    {
        printf("O arquivo foi lido com sucesso!\n\n");
    }

    //passando os valores lidos do arquivo txt para os vetores usuarios;
    for(ordem = 0; ordem < Quantidade; ordem ++)
    {
        fscanf(entrada, "%s %s %d\n", cliente[ordem].nome, cliente[ordem].endereco, &cliente[ordem].codigoCliente);
    }
    
    //imprimindo os dados de todos os usuarios;
    for(ordem = 0; ordem < Quantidade; ordem ++)
    {
        printf("name: %s\naddress: %s\ncod client: %d\n\n", cliente[ordem].nome, cliente[ordem].endereco, cliente[ordem].codigoCliente);
    }

    //perguntando ao usuario o jeito que ele vai pesquisar o usuario;
    pergunta(&escolha);
    if(escolha == 1)
    {
        printf("Digite o codigo do usuario que voce deseja buscar: ");
        scanf("%d",&cod);
        system("clear");
        system("cls");
        BuscaCodigo(&cliente,&cod,&posicao);
        cod = 0;
    }
    else
    {
        printf("O usuario nao foi encontrado...\n");
    }

    fclose(entrada);
    return 0;
}