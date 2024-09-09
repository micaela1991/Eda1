/*4- Escriba una función que reciba dos vectores, que podrán ser de distintos tamaños, pero el segundo
menor o igual que el primero. El primer vector contendrá valores numéricos, y el segundo los
valores a buscar en el primero. Se deberá devolver de la función cuántos de esos valores existen en
el primer vector. Además escriba un main que muestre su uso.
*/

#include <stdio.h>
#include <stdlib.h>

short valores_a_buscar(short *V_numerico, short cantV, short *V_busqueda, short busqueda);

int main(void)
{

    short resultado;
    short cantVector;
    short cantVector_busqueda;

    short vector[] = {3, 10, 15, 5, 9, 20, 11, 7};
    cantVector = sizeof(vector) / sizeof(vector[0]);

    short vector_busqueda[] = {10, 15, 30, 50, 9, 1, 78};
    cantVector_busqueda = sizeof(vector_busqueda) / sizeof(vector_busqueda[0]);

    resultado = valores_a_buscar(vector, cantVector, vector_busqueda, cantVector_busqueda);

    printf("\nson %hd valores los que exiten en el primer vector", resultado);

    return 0;
}

short valores_a_buscar(short *V_numerico, short cantV, short *V_busqueda, short busqueda)
{

    short cuantos = 0;

    for (short i = 0; i < cantV; i++)
    {
        for (short j = 0; j < busqueda; j++)
        {
            if (V_numerico[i] == V_busqueda[j])
            {
                cuantos++;
            }
        }
    }
    return cuantos;
}
