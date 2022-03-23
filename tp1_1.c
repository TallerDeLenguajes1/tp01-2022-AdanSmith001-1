#include <stdio.h>

int main()
{

    printf("Hola Mundo\n");

    int num, *p_num;

    num = 1;

    p_num = &num;

    printf("\nContenido del puntero: %p\n", p_num);
    printf("Direcci%cn de memoria almacenada en el puntero: %p\n",162, p_num);
    printf("Direcci%cn de memoria de la variable: %p\n",162, &num);
    printf("Direcci%cn de memoria del puntero: %p\n",162, &p_num);
    printf("Tama%co de memoria utilizado por el puntero: %d bytes",164, sizeof(p_num));
    return 0;
}