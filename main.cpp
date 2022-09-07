#include "Cliente.hpp"
#include <iostream>
#include <stdio.h>
#define byte unsigned char


void menu()
{
    printf("1. Realizar pedido");
    printf("2. Ver pedidos");
    printf("3. Salir");
}

void realizarPedido()
{

}

void verPedido()
{

}

int main()
{
    byte opcion;
    do
    {
        menu();
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            system("cls");
            realizarPedido();
            break;
        case 2:
            system("cls");
            verPedido();
            break;
        case 3:
            system("cls");
            printf("Gracias por su visita");
            break;
        default:
            break;
        }
    } while (opcion != 3);
    system("cls");
    return 0;    
}