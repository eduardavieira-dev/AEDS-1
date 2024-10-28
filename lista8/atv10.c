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

void func(int *px, int *py) {
    px = py;               // px agora aponta para o endereço de py
    *py = (*py) * (*px);  // Multiplica o valor de py pelo valor que px (que agora é py) aponta
    *px = *px + 2;        // Adiciona 2 ao valor que px aponta (que é py, mas o valor de px não muda)
}

int main() {
    int x, y;
    
    // Leitura dos valores
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);
    
    func(&x, &y); // Chamada da função passando os endereços de x e y
    
    // Exibe os resultados
    printf("x = %d, y = %d\n", x, y);
    
    return 0;
}
