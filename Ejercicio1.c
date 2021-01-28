#include <stdio.h>

// Referenciación : Es la obtencion de la dirección de una variable

int main() {
    int dir_var = 15;
    // Direccion de memoria de esa variable
    printf("La dirección de dir_var es: %p \n", &dir_var);
    return 0;
}