#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){

short vector[]={ 20,30,4,5,6,27,8,9,11,12};
short cantidad;
short *Puntero_vector=NULL;
short indice;
Puntero_vector=vector; 
cantidad=sizeof(vector)/sizeof(short);

for (indice=0;indice<cantidad;indice++)
{
    printf("\nvector[%hd]: %hd",indice,*Puntero_vector ++);
}


return 0;
}
