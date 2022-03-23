#include <stdio.h>

int main ()
{
    printf("Hola Mundo\n");

    int *punt, num;
    num = 1;
    punt = &num;

    printf("\nContenido de la variable puntero: %p\n", punt);
    printf("Direcci%cn de memoria almacenada en el puntero: %p\n", 162, punt);
    printf("Direcci%cn de memoria de la variable: %p\n",162, &num);
    printf("Direcci%cn de memoria del puntero: %p\n",162, &punt);
    printf("Tama%co de memoria utilizado por el puntero: %d",164, sizeof(punt));
    return 0;
}