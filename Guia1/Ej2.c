/*
2 a)
Se debe escribir un programa para calcular la resistencia total de un circuito en serie. En tal
circuito, la resistencia total es la suma de todos los valores individuales de los resistores.
Suponer que el circuito consiste en una cantidad de 2 resistores de 56 Ω, 4 de 33 Ω y 1 de 15
Ω. 
#include <stdio.h>
#define R_1 56
#define R_2 33
#define R_3 15
#define CANTIDAD_R_1 2
#define CANTIDAD_R_2 4
#define CANTIDAD_R_3 1
int main(void)
{
  int Resistencia_total = CANTIDAD_R_1*R_1 + CANTIDAD_R_2*R_2 + CANTIDAD_R_3*R_3;
  return 0;
}
*/
/* 
2 c)
c) Escribir un programa que lea de teclado el conjunto de valores de las resistencias para
cualquier circuito serie y calcule la resistencia total del circuito, mostrando el resultado
con 2 decimales por pantalla. 
*/

#include <stdio.h>
#define MSJ_CANTIDAD_DE_RESSITENCIAS "Ingrese la cantidad de resistencias en serie que tiene su circuito."
#define MSJ_ORDEN_RESISTENCIAS "Ingrese las resistencias con el orden que usted las lee de sus circuito. No ingrese repetidamente el valor de una misma resistencia."
#define MSJ_VALOR_RESISTENCIA "Ingresa el valor de la resitencia."
#define MSJ_SALIDA "La resistencia equivalente en serie del circuito es: "
#define MSJ_ERROR_VALOR  "Ingreso un valor erroneo."
#define K 1000
#define M 1000000
#define CONDICION (i < Cantidad_Resistencias)

int main(void)
{
  int Cantidad_Resistencias;
  float Resistencia_Ingresada;
  float Resistencia_Total = 0;
  int i;

  printf("%s\n", MSJ_CANTIDAD_DE_RESSITENCIAS);

  /*Validar el scanf*/
  if( !scanf("%d", &Cantidad_Resistencias) )
  {
    fprintf(stderr,"%s",MSJ_ERROR_VALOR);
    return 1;
  }
 
  printf("\n");
  printf("%s\n", MSJ_ORDEN_RESISTENCIAS);
  
  for (i = 0 ; CONDICION ; i++)
  {
    printf("%s\n", MSJ_VALOR_RESISTENCIA);

    /*Validar el scanf*/
    if (!scanf("%f", &Resistencia_Ingresada))
    {
      fprintf(stderr,"%s",MSJ_ERROR_VALOR);
      return 1;
    }
    puts("\n");
    
    Resistencia_Total = Resistencia_Total + Resistencia_Ingresada;
  
  }

  printf("%s%.2f\n", MSJ_SALIDA, Resistencia_Total);
  return 0;
}