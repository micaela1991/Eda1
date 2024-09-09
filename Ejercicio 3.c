/*3. Escriba una función que reciba un vector numérico y diga cuantos son números primos. En un main
se deberá imprimir cuantos fueron.*/

#include <stdio.h>
#include <stdlib.h>
short cuantos_primos(short *, short);

int main(void)
{

  short vector[] = {2, 3, 7, 5, 10, 1, 55, 71, 70, 6, 11};
  short cantidad;
  short i;
  short resultado;

  cantidad = sizeof(vector) / sizeof(short);

  for (i = 0; i < cantidad; i++)
  {

    printf("\nVector[%hd]: %hd", i, vector[i]);
  }

  resultado = cuantos_primos(vector, cantidad);

  printf("\nSon: %hd numeros primos", resultado);
}

short cuantos_primos(short *V, short cant)
{

  short indice;
  short cuantos = 0;
  short esPrimo = 0;

  for (indice = 0; indice < cant; indice++)
  {
    if (V[indice] > 1)
    {
      esPrimo = 1;
      for (short j = (V[indice] / 2); j > 1 && esPrimo; j--)
      {
        if (V[indice] % j == 0)
        {
          esPrimo = 0;
        }
      }
      if (esPrimo)
      {
        cuantos++;
      }
    }
  }
  return cuantos;
}
