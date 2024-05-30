#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("hola mundo");
    int num = 1; //declaracion de variable y puntero
    int *p_num;

    p_num = &num; //se guarda la direccion de la variable en el puntero

    printf("El contenido del puntero: %d", *p_num);
    printf("\nLa direccion de memoria almacenada por el puntero: %d", p_num);
    printf("\nLa direccion de memoria de la variable: %d", &num);
    printf("\nLa direccion de memoria del puntero: %d", &p_num);
    printf("\nEl tamaño de memoria utilizado por esa variable: %d bytes", sizeof(num));

    return 0;
}