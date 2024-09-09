/*7- Escriba una función que reciba como parámetro un string y una letra (pásela a la función también
por medio de un puntero). Busque si existe dicha letra por medio de punteros y devuelva cuantas
veces está en el texto. Escriba un main que use dicha función y todos los elementos que sean
necesarios.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

short buscar_letra(char *, short, char *);

int main(void)
{

    setlocale(LC_ALL, "");

    char texto[] = "Hola mundo";
    short cant;
    char letra ='a';
    short resultado;

    cant = strlen(texto);

    resultado = buscar_letra(texto, cant, &letra);

    if (resultado > 1 || resultado == 0)
    {
        printf("La letra %c se repite %hd veces en el texto", letra, resultado);
    }
    else
    {
        printf("La letra  %c  se repite %hd vez en el texto", letra, resultado);
    }
    return 0;
}

short buscar_letra(char *texto, short cantidad, char *letra)
{

    short cuantos = 0;
    for (short i = 0; i < cantidad; i++)
    {
        if (*letra == texto[i])
        {
            cuantos++;
        }
    }

    return cuantos;
}
