/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
   
   {
   int numero, cont=0;
    
      printf("Digite um numero:");
      scanf("%d",&numero);
       
       for(cont=0; cont<=10 ; cont++)
         {
          printf("%d X %d = %d \n" ,numero,cont,numero*cont);
         }
         return 0;
}
