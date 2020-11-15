/*) La fórmula de la desviación estándar normal Z, usada en aplicaciones estadísticas es:
z=(x-µ)/σ
en donde µ es el valor medio y σ es la desviación estándar. Usando esta fórmula, escribir un
programa que calcule y despliegue el valor de la desviación estándar normal cuando x = 85,3, µ = 80 y σ =
4.*/

#include <stdio.h>

int main(void)
{
  float z;
  float x = 85.3;
  float u = 4;
  float sigma = 80;

  z = ( x - u ) / sigma;
  
  printf("%.3f", z);
  return 0;
}

/*En este programa nos quieren mostrar que cuando usamos caracteres que no estan en la tabla ASCII como el mu o el sigma, nos va a saltar un error con el compilador, entonces hay que estar atentos a lo que ingresamos como nombre de nuestras variables */
