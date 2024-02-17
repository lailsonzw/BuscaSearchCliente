#include "cliente.c"
#include<stdio.h>
#include<stdlib.h>

void escrever(){
    FILE* funcao_escrever = fopen ("entrada.txt", "w");
    
    if(funcao_escrever==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("arquivo criado com sucesso\n");
    }

    fprintf(funcao_escrever, "meu texto");
    fclose;
}

void ler(){
    int l;
    FILE* funcao_ler = fopen ("saida.txt", "r");
    if (funcao_ler==NULL){
        printf("erro ao abrir arquivo\n");
        exit(1);
    }
    else{
        printf("arquivo criado com sucesso\n");
    }

    fscanf(funcao_ler, "%s", l);
    printf("%s\n", l);
    fclose(funcao_ler);

}
}