#include <stdio.h>

int calcularCuadrado(int num);
void calculoCuadrado(int *num);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main()
{
    int a, b;

    printf("Ingrese dos numeros:\n");
    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);

    printf("\nValor de a: %d\n", a);
    printf("Su cuadrado en una funcion de retorno: %d\n", calcularCuadrado(a));
    calculoCuadrado(&a);

    printf("\nValor de b: %d\n", b);
    printf("Su cuadrado en una funcion de retorno: %d\n", calcularCuadrado(b));
    calculoCuadrado(&b);

    invertir(&a, &b);

    printf("\nValores invertidos: \n");
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    orden(&a, &b);

    printf("\nValores ordenados: \n");
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}

int calcularCuadrado(int num){

    int resultado = num*num;
    return resultado;

}

void calculoCuadrado(int *num){
    int resultado = (*num)*(*num);

    printf("Su cuadrado en la funcion void: %d\n", resultado);
    printf("Direccion de memoria de la variable recibida en la funcion void: %p\n", num);
    printf("Contenido de la variable en la funcion void: %d\n", *num);
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