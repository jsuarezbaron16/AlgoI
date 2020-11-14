

/*
Ej8: factorial
*/

#include <stdio.h>

#define MSG_USR               "Ingrese un número no negativo:"
#define ERROR_MSG             "ERROR"
#define ERROR_NEGATIVE_NUMBER "número negativo"
#define ERROR_NOT_A_NUMBER    "no se pudo interpretar un número entero"

int main(void)
{

  int num;
  size_t i,factorial;
  /*Se usa size_t porque un facotrial es un numero entero positivo muy grande*/

  /*puts(MSG_USR);*/      /* Con puts salta a la siguiente línea */ 
  /*fputs(MSG_USR,stderr);*/  /* Con fputs no incluye el salto de línea*/
  
  fprintf(stderr, "%s ", MSG_USR ); /* Con fprintf no incluye el salto de línea */

  if(!scanf("%d", &num)) 
  {
    fprintf(stderr, "%s : %s \n", ERROR_MSG, ERROR_NOT_A_NUMBER);
    return 1;
  }
  
  if(num < 0) 
  {
    fprintf(stderr, "%s : %s \n", ERROR_MSG, ERROR_NEGATIVE_NUMBER);
    return 1;
  } 

  factorial = 1;
  for(i = 1; i <= num; i++)
  {
    factorial *= i;
  }
  
  /*printf("%lu \n", factorial);*/
  fprintf(stdout, "%lu \n", factorial);
  return 0;
}