#include <stdio.h>

int main() {

   int a = 10, b = 15;
   
   int *const ptr = &a;
   //Ya no permite hacer un cambio de memoria
   *ptr = 3;
   ptr = &b;

    
   return 0;
}
  