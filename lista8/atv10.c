/* 
* 10. Mostre na tabela a seguir todas as alterações dos conteúdos das variáveis (teste de mesa) e
* identifique qual será a saída do programa em C para os valores lidos (x = 5 e y = 6).
 void func(int *px, int *py)
 {
 px = py;
 *py = (*py) * (*px);
 *px = *px + 2;
 }
 int main ()
 {
 int x, y;
  scanf(“%d”,&x);
  scanf(“%d”,&y);
  func(&x,&y);
  printf(“x = %d, y = %d”, x, y);
   return 0;
 }
*/

#include <stdio.h>


int main(){
    


    return 0;
}