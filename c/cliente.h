//Adicionando a struct cliente no arquivo .h;
    typedef struct cliente cliente;
   
    //Adicionando a função para imprimir os dados dos clientes;
    void imprimir(cliente * usuario);
   
    //Adicionando a função que permitirar o usuario escolher pesquisar pelo codigo ou pelo nome;
    void pergunta(int * escolha);
    
    //Adicionando a função que irar buscar o usuario pelo codigo;
    void BuscaCodigo(struct cliente * usuario,int * cod,int * posicao);
