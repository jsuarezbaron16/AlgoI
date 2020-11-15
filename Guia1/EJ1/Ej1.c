
/*
  Conversión de divisas (pesos, reales, dólares estadounidenses y euros).
  Realizar las validaciones que considere necesarias.
*/

#include <stdio.h>
#include "constantes.h"
#include "mensajes.h"

int main(void) 
{
  float Dinero_Ingresado;
  int Dinero_Seleccionado;
  double cantidad_dolares, cantidad_pesos, cantidad_euros,cantidad_reales;
  
  printf("%s", MSJ_CANT_DINERO);

  /* Valida si se ingresó un valor, puede ser flotante*/
  if(!scanf("%f", &Dinero_Ingresado)){
    fprintf(stderr,"%s",MSJ_ERROR_VALOR);
    return 1;
  }
  puts("\n");

  /* Valida si el valor es negativo*/
  if(Dinero_Ingresado < 0){
    printf("%s\n", MSG_VALOR_NEGATIVO);
    return 1;
  }

  /*printf("%s\n",MSJ_USR_DIVISA_ORIGEN);*/

  printf("%s\n\n", MSJ_SELECCION_DIVISA);

  /* Valida si se ingresó un valor, puede ser flotante*/
  if(!scanf("%d", &Dinero_Seleccionado))
  {
    fprintf(stderr,"%s",MSJ_ERROR_VALOR);
    return 1;
  }

  /* Valida si el valor es negativo*/
  if(Dinero_Seleccionado < 0){
    printf("%s\n", MSG_VALOR_NEGATIVO);
    return 1;
  }
  puts("\n");

   while ( Dinero_Seleccionado < OPCION_USD &&Dinero_Seleccionado > OPCION_REAL)
  {
    printf("%s\n", MSJ_ERROR_VALOR);
    printf("%s\n", MSJ_SELECCION_DIVISA);
    scanf("%d", &Dinero_Seleccionado);
  }

  switch(Dinero_Seleccionado){

    case OPCION_USD:
        cantidad_pesos = Dinero_Ingresado * CONV_DOLAR_PESO;
        cantidad_euros = Dinero_Ingresado * CONV_DOLAR_EURO;
        cantidad_reales = Dinero_Ingresado * CONV_DOLAR_REAL;

        fprintf(stdout, "%s%.3f\n", MSJ_CANTIDAD_PESOS, cantidad_pesos);
        fprintf(stdout,"%s%.3f\n", MSJ_CANTIDAD_EUROS, cantidad_euros);
        fprintf(stdout,"%s%.3f\n", MSJ_CANTIDAD_REALES, cantidad_reales);
        break;
    
    case OPCION_EURO:
        cantidad_dolares = Dinero_Ingresado / CONV_DOLAR_EURO;
        cantidad_pesos   = cantidad_dolares * CONV_DOLAR_PESO;
        cantidad_reales  = cantidad_dolares * CONV_DOLAR_REAL; 
        printf("%s%.3f\n", MSJ_CANTIDAD_DOLARES, cantidad_dolares);
        printf("%s%.3f\n", MSJ_CANTIDAD_PESOS, cantidad_pesos);
        printf("%s%.3f\n", MSJ_CANTIDAD_REALES, cantidad_reales);
        break;

    case OPCION_PESO:
        cantidad_dolares = Dinero_Ingresado / CONV_DOLAR_PESO;
        cantidad_euros   = cantidad_dolares * CONV_DOLAR_EURO;
        cantidad_reales  = cantidad_dolares * CONV_DOLAR_REAL; 

        printf("%s%.3f\n", MSJ_CANTIDAD_DOLARES, cantidad_dolares);
        printf("%s%.3f\n", MSJ_CANTIDAD_EUROS,  cantidad_euros);
        printf("%s%.3f\n", MSJ_CANTIDAD_REALES, cantidad_reales);
        break;
    
    case OPCION_REAL:

        cantidad_dolares = Dinero_Ingresado / CONV_DOLAR_REAL;
        cantidad_euros   = cantidad_dolares * CONV_DOLAR_EURO;
        cantidad_pesos   = cantidad_dolares * CONV_DOLAR_PESO; 

        printf("%s%.3f\n", MSJ_CANTIDAD_DOLARES, cantidad_dolares);
        printf("%s%.3f\n", MSJ_CANTIDAD_EUROS, cantidad_euros);
        printf("%s%.3f\n", MSJ_CANTIDAD_PESOS, cantidad_pesos);

        break; 
  }

  printf("\n%s.\n", MSJ_GRACIAS);

  return 0;
}