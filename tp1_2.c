#include <stdio.h>

int calcularCuadrado(int a);
void calculoCuadrado(int *a);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main()
{
    int a, b;

    printf("Ingrese dos numeros: \n");
    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);

    printf("\nValor de a: %d\n", a);
    printf("Su cuadrado en la funcion de retorno: %d\n", calcularCuadrado(a));
    calculoCuadrado(&a);

    printf("\nValor de b: %d\n", b);
    printf("Su cuadrado en la funcion de retorno: %d\n", calcularCuadrado(b));
    calculoCuadrado(&b);
    
    invertir(&a, &b);

    printf("\nValores invertidos \n");
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    orden(&a, &b);

    printf("\nValores ordenados \n");
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}




int calcularCuadrado(int a){
    int result = a*a;
    return result;
}

void calculoCuadrado(int *a){
    int result = (*a)*(*a);
    printf("Su cuadrado en la funcion void: %d\n", result);
    printf("Direccion de memoria de la variable recibida: %p\n", a);
    printf("Contenido de la variable recibida: %d\n", *a);
}

void invertir(int *a, int *b){
    int c;

    c = *b;
    *b = *a;
    *a = c;
}

void orden(int *a, int *b){
    if(*a > *b) invertir(a, b);
}