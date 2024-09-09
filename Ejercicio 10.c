/*10- Escriba una función que permita buscar en un vector que sea del siguiente tipo de dato por el
campo texto. De existir lo buscado devuelva donde se encontró y si no está devuelva -1.
    struct datos{
        short A;
        float B;
        char texto[100];
    };*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datos
{
    short A;
    float B;
    char texto[100];
};

void buscar(struct datos *, char *, short, short*);

int main(void)
{

    struct datos vector[] = {{5, 4.6, "Milagros"}, {6, 3.2, "Juana"}, {1, 3.5, "Alejandro"}, {4, 1.5, "Micaela"}};
    short cant;
    char texto_buscar[] = "Milagros";
    short bandera = -1;

    cant = sizeof(vector) / sizeof(vector[0]);

    printf("\nDATOS DEL VECTOR:");

    for (short i = 0; i < cant; i++)
    {
        printf("\nVector[%hd]: A: %hd. B: %.2f. TEXTO: %s", i, vector[i].A, vector[i].B, vector[i].texto);
    }

    buscar(vector, texto_buscar, cant, &bandera);

    if (bandera == -1)
    {
        printf("\n\nEL VALOR DEVUELTO ES: %hd",bandera);
        printf("\nNO SE ENCONTRO DENTRO DEL VECTOR EL TEXTO");
    }

    return 0;
}

void buscar(struct datos *vector, char *texto_buscar, short cantidad, short *bandera)
{

    for (short i = 0; i < cantidad; i++)
    {
        if (strcmp(vector[i].texto, texto_buscar) == 0)
        {
            printf("\n\nEl texto buscado se encontro en el siguiente vector:");
            printf("\nVector[%hd]: A: %hd. B: %.2f. TEXTO: %s", i, vector[i].A, vector[i].B, vector[i].texto);
            *bandera = 0;
        }
    }

}
