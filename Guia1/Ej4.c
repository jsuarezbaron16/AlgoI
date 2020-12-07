/* La ecuación de una curva normal utilizada en aplicaciones estadísticas es:
y=( 1 / (2*pi* (sigma)^(1/2)))^(e^((-1/2)*(((x-mu)/sigma))^2))
*/

/* Compilar con gcc Ej4.c -o Ej4 -Wall -ansi -pedantic -lm
-lm: https://stackoverflow.com/questions/12824134/undefined-reference-to-pow-in-c-despite-including-math-h
*/

#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main(void){

    int u, o, x;
    int st, c;
    float y;

    printf(" Ingrese un valor para:\n u \tx \to\n");
    if (! (st=scanf("%i%i%i", &u, &x, &o)))
    {
        fprintf( stderr, "%s\n", "ERROR AL INGRESO DE DATOS");
        return 1;
    }

    if (st == EOF){
        return 1;
    }

    while ((c=getchar())!='\n');

    if (o != 0)
    {
        printf("Los datos ingresados son: \n U=%d\n X=%d\n O=%d\n", u, x, o);
        y = (1/(2 * PI * sqrt(o))) * exp(-0.5 * pow((float)(x-u)/o, 2)) ;
        printf("El valor de la curva normal es:  %.4f\n", y);
    } else
    {
      printf("ERROR: no se puede diviir entre 0\n");
    }
    
    return 0;
}