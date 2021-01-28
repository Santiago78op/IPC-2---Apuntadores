#include <stdio.h>


//Haciendo Uso de Estructuras
int main() {
    
    //depende del tipo de dato que vamos a impirmir, cambia el argumento.
       struct Articulo{
       char nombre[20];
       char descripcion[100];
       float precio;
   };
   
   struct Articulo art;
   struct Articulo *ptr_art = &art;
   
   //desreferenciar
   //Primer Metodo
   (*ptr_art).precio = 50.38;
   //Segundo Metodo
   ptr_art->precio = 50.38;
   
   printf("Precio: %f", ptr_art->precio);
   return 0;
}
  