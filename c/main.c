#include "cliente.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define NomeArquivo "dados.txt"

int main(void)
{
    cliente cliente[100];
    FILE * entrada;
    int posicao = 0;
    int escolha = 0;
    int cod = 0;

    entrada = fopen(NomeArquivo,"rt");

    printf("lendo dados.\n");
    sleep(1);
    printf("lendo dados..\n");
    sleep(1);
    printf("lendo dados...\n\n");
    sleep(1);

    system("clear");
    if(entrada == NULL)
    {
        printf("nao foi possivel ler o arquivo!!!\n");
        exit(1);
    }
    else
    {
        printf("O arquivo foi lido com sucesso!\n\n");
    }

    for(int ordem = 0; ordem < 100; ordem ++)
    {
        fscanf(entrada, "%s %s %d\n", cliente[ordem].nome, cliente[ordem].endereco, &cliente[ordem].codigoCliente);
    }
    
    for(int ordem = 0; ordem < 100; ordem ++)
    {
        printf("name: %s\naddress: %s\ncod client: %d\n\n", cliente[ordem].nome, cliente[ordem].endereco, cliente[ordem].codigoCliente);
    }

    pergunta(&escolha);
    if(escolha == 1)
    {
        printf("Digite o codigo do usuario que voce deseja buscar: ");
        scanf("%d",&cod);

        BuscaCodigo(&cliente[100],&cod,&posicao);
        cod = 0;
    }
    else
    {

    }

    fclose(entrada);
    return 0;
}