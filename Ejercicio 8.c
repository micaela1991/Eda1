/*8- Escriba una función que reciba como parámetro dos strings, y devuelva, un 0 si son iguales o 1 si
son distintos (siempre se está hablando del contenido de los mismos) Escriba un main que use
dicha función y todos los elementos que sean necesarios.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>

short comparacion(char *, short, char *, short);

int main(void)
{
    setlocale(LC_ALL, "");
    char texto1[] = "hola mundo";
    char texto2[] = "hola mundo";
    short cant1;
    short cant2;
    short resultado;

    cant1 = strlen(texto1);
    cant2 = strlen(texto2);

    printf("\nTexto 1: %s",texto1);
    printf("\nTexto 2: %s", texto2);

    resultado = comparacion(texto1, cant1, texto2, cant2);

    printf("\nResultado de la comparación: %hd", resultado);
    printf("\n\n Si son iguales da 0 y si son distintos 1");
    

    return 0;
}

short comparacion(char *texto1, short cantidad1, char *texto2, short cantidad2)
{

    short resul;

    if (cantidad1 == cantidad2)
    {
        for (short i = 0; i < cantidad1; i++)
        {

            if (texto1[i] == texto2[i])
            {
                resul = 0;
            }
            else
            {
                resul = 1;
            }
        }
    }
    else
    {
        resul = 1;
    }

    return resul;
}
