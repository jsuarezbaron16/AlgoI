/*
  Laejecución debe concluir al pulsar CTRL-Z y enter ó CTRL-D y enter
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int entrada=0; printf("Escribe un caracter: ");

    while ((scanf("%c%*c", &entrada)) != EOF) {
        printf("La entrada no ha sido EOF\n", EOF);
        printf("Escribe un caracter:\n");
    }

    return 0; 

}