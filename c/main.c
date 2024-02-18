#include "cliente.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define NomeArquivo "dados.txt"

int main(void)
{
    cliente cliente;
    FILE * entrada;

    entrada = fopen(NomeArquivo,"rt");

    printf("lendo dados.\n");
    sleep(1);
    printf("lendo dados..\n");
    sleep(1);
    printf("lendo dados...\n\n");

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

    for(int ordem = 0; ordem < 3; ordem ++){
        fscanf(entrada, "%s %s %d", cliente.nome, cliente.endereco, &cliente.codigoCliente);
    }
    

    printf("name: %s\naddress: %s\ncod client: %d\n", cliente.nome, cliente.endereco, cliente.codigoCliente);

    fclose(entrada);
    return 0;
}
