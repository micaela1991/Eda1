/*2- Escriba una función que reciba un vector numérico de enteros y calcule su promedio devolviendo
dicho valor. La función deberá poder recibir vectores de distinto tamaño para hacer el cálculo.
Muestre como usa la función en un main.*/

#include <stdio.h>
#include <stdlib.h>

float promedio(short *, short);

int main(void)
{
  short vector[] = {10, 10, 10, 10, 10,5,5};
  short cantidad;
  float resultado;
  short i;

  cantidad = sizeof(vector) / sizeof(short);

  resultado = promedio(vector, cantidad);

  for (i = 0; i < cantidad; i++)
  {

    printf("\nVector[%hd]: %hd", i, *(vector + i));
  }

  printf("\nEl promedio de los siguientes numeros es: %.2f", resultado);


  return 0;
}

float promedio(short *V, short cant)
{

  short indice;
  long suma = 0;
  float prom;

  for (indice = 0; indice < cant; indice++)
  {
    suma = suma + V[indice];
  }

  prom = (float)suma / cant;

  return prom;
}
