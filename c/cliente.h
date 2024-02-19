//adicionando uma struct para guardar os dados dos clientes;

    #include <math.h>

    typedef struct cliente cliente;

    void imprimir(cliente * usuario);

    void pergunta(int * escolha);

    void BuscaCodigo(struct cliente * usuario,int * cod,int * posicao);