#include <stdio.h>

int main (){
char nombre [100];

printf ("Hola mundo\n");

printf ("Nombre:\n");
fgets (nombre, sizeof(nombre), stdin);

printf ("Saludos %s", nombre);

    return 0;
}