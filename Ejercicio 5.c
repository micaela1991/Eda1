/*5- Escriba una función que reciba cuatro letras sueltas por referencia y devuelva un string con las
mismas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 void conversor_letras(char *, char *, char *, char *, char *);

int main(void)
{
    char c1 = 'H';
    char c2 = 'O';
    char c3 = 'L';
    char c4 = 'A';

    char cadena[5];

    conversor_letras(&c1, &c2,&c3,&c4, cadena);

    printf("%s", cadena);

    return 0;
}

void conversor_letras(char *c1, char *c2, char *c3, char *c4, char *cadena)
{
    cadena[0] = *c1;
    cadena[1] = *c2;
    cadena[2] = *c3;
    cadena[3] = *c4;
	cadena[4]=0;

}
