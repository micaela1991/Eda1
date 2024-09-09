/*9- Escriba una función que permita ordenar un vector que sea del siguiente tipo de dato por el campo
letra:
    struct datos{
        short A;
        float B;
        char letra;
    };
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datos
{
    short A;
    float B;
    char letra;
};

void ordenamiento(struct datos *, short);

int main(void)
{

    struct datos vector[] = {{5, 4.6, 'b'}, {6, 3.2, 'a'}, {1, 3.5, 'c'}, {4, 1.5, 'd'}};
    short cant;

    cant = sizeof(vector) / sizeof(vector[0]);

    printf("Vector original:");
    for (short i = 0; i < cant; i++)
    {
        printf("\nVector[%hd]: A: %hd. B: %.2f. LETRA: %c", i, vector[i].A, vector[i].B, vector[i].letra);
    }

    ordenamiento(vector, cant);

    printf("\n\nEl vector ordenado queda de la siguiente manera:");
    for (short i = 0; i < cant; i++)
    {
        printf("\nVector[%hd]: A: %hd. B: %.2f. LETRA: %c", i, vector[i].A, vector[i].B, vector[i].letra);
    }

    return 0;
}

void ordenamiento(struct datos *vector, short cant)
{

    short i;
    short j;
    struct datos auxiliar;

    for (i = 0; i < cant - 1; i++)
    {
        for (j = i + 1; j < cant; j++)
        {
            if (vector[i].letra > vector[j].letra)
            {
                auxiliar = vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }
    }
}
