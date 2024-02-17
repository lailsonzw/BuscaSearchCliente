#include "cliente.c"
#include <string.h>
#include <stdio.h>



int main(void)
{
    test cliente;
    
    cadastrar(&cliente);
    imprimir(&cliente);
    
    return 0;
}
