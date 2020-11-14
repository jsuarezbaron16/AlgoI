
#include <stdio.h>
#include "mensajes.h"
/*
#define AND &&
#define OR ||
#define CONDICION (0 >= Dinero_Seleccionado AND Dinero_Seleccionado >= 5)
*/
/*
#define MSJ_ERROR_VALOR "Ingresaste un valor invalido"
#define MSJ_ERROR_DIVISA_INVALIDA "Ingreso una divisa invalida"
#define ERROR 
*/

int main(void)
{
  double CANTIDAD_DOLARES, CANTIDAD_PESOS, CANTIDAD_EUROS,CANTIDAD_REALES;
  double Dinero_Ingresado;
  int Dinero_Seleccionado;

  printf("%s\n\n", MSJ_CANT_DINERO);
  scanf("%lf", &Dinero_Ingresado);
  printf("\n");
  /*Falta validar para ver si lo que ingresa es un numero o no lo es. Tambien ver si es positivo o no lo es. No se hacerlo.
  if(Dinero_Ingresado ==  INVALIDO)
  {
    printf("%s\n", MSJ_ERROR_VALOR);
  } 
  Volver a pedir que ingrese otro valor
  */

  printf("%s\n\n", MSJ_SELECCION_DIVISA);
  scanf("%d", &Dinero_Seleccionado);
  printf("\n");

  /*FAlta validar lo mismo que antes */

  while ( Dinero_Seleccionado < CASO_DOLAR &&Dinero_Seleccionado > CASO_REAL)
  {
    printf("%s\n", MSJ_ERROR_VALOR);
    printf("%s\n", MSJ_SELECCION_DIVISA);
    scanf("%d", &Dinero_Seleccionado);
  }
  switch (Dinero_Seleccionado)
    {
      case CASO_DOLAR :

        CANTIDAD_PESOS = Dinero_Ingresado * CONV_DOLAR_PESO;
        CANTIDAD_EUROS = Dinero_Ingresado * CONV_DOLAR_EURO;
        CANTIDAD_REALES = Dinero_Ingresado * CONV_DOLAR_REAL;

        printf("%s%lf\n", MSJ_CANTIDAD_PESOS, CANTIDAD_PESOS);
        printf("%s%lf\n", MSJ_CANTIDAD_EUROS, CANTIDAD_EUROS);
        printf("%s%lf\n", MSJ_CANTIDAD_REALES, CANTIDAD_REALES);

        break;
      
      case CASO_EURO:

        CANTIDAD_DOLARES = Dinero_Ingresado / CONV_DOLAR_EURO;
        CANTIDAD_PESOS = CANTIDAD_DOLARES * CONV_DOLAR_PESO;
        CANTIDAD_REALES = CANTIDAD_DOLARES * CONV_DOLAR_REAL; 

        printf("%s%lf\n", MSJ_CANTIDAD_DOLARES, CANTIDAD_DOLARES);
        printf("%s%lf\n", MSJ_CANTIDAD_PESOS, CANTIDAD_PESOS);
        printf("%s%lf\n", MSJ_CANTIDAD_REALES, CANTIDAD_REALES); 

        break;
        
      case CASO_PESO:

        CANTIDAD_DOLARES = Dinero_Ingresado / CONV_DOLAR_PESO;
        CANTIDAD_EUROS = CANTIDAD_DOLARES * CONV_DOLAR_EURO;
        CANTIDAD_REALES = CANTIDAD_DOLARES * CONV_DOLAR_REAL; 

        printf("%s%lf\n", MSJ_CANTIDAD_DOLARES, CANTIDAD_DOLARES);
        printf("%s%lf\n", MSJ_CANTIDAD_EUROS, CANTIDAD_EUROS);
        printf("%s%lf\n", MSJ_CANTIDAD_REALES, CANTIDAD_REALES); 

        break;


      case CASO_REAL:

        CANTIDAD_DOLARES = Dinero_Ingresado / CONV_DOLAR_REAL;
        CANTIDAD_EUROS = CANTIDAD_DOLARES * CONV_DOLAR_EURO;
        CANTIDAD_PESOS = CANTIDAD_DOLARES * CONV_DOLAR_PESO; 

        printf("%s%lf\n", MSJ_CANTIDAD_DOLARES, CANTIDAD_DOLARES);
        printf("%s%lf\n", MSJ_CANTIDAD_EUROS, CANTIDAD_EUROS);
        printf("%s%lf\n", MSJ_CANTIDAD_PESOS, CANTIDAD_PESOS);

        break; 

      /*
      case '\n' : case ' ':
        break;
      */
    }

  printf("\n%s.\n", MSJ_GRACIAS);

  return 0;
}
