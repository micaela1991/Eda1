/*1- Escriba un main en el que se declare un vector de números enteros, entre 10 y 15 valores, y que
muestre dichos valores por pantalla usando un puntero para hacerlo.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    short vector[] = {20, 30, 4, 5, 6, 27, 8, 9, 11, 12,6,9};
    short cantidad;
    short *Puntero_vector = NULL;
    short indice;
    
    Puntero_vector = vector;
    
    cantidad = sizeof(vector) / sizeof(short);

    for (indice = 0; indice < cantidad; indice++)
    {
        printf("\nvector[%hd]: %hd", indice, *(Puntero_vector+indice));
    }

    return 0;
}
