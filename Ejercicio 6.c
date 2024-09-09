/*6-Escriba una función que reciba como parámetro un texto y que devuelva la primera letra del mismo
usando un puntero. Escriba un main que use dicha función y todos los elementos que sean
necesarios.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void primeraLetra(char *, char *);

int main(void)
{

    char texto[] = "Hola mundo";
    char letra;

    printf("El texto es: %s", texto);

    primeraLetra(texto, &letra); // paso la direccion de letra

    printf("\nLa primera letra del texto es: %c", letra);

    return 0;
}
void primeraLetra(char *texto, char *letra)
{

    *letra = texto[0];
}
