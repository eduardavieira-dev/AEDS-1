/* 
* 3. Desenvolva um programa para decriptografar a string gerada no exercício 2
*/

#include <stdio.h>
#include <string.h>

int main(){
    
    char str[100];
    int key;

    printf("Digite a string criptografada: ");
    gets(str);
    printf("Digite a chave utilizada: ");
    scanf("%d", &key);

    for(int i=0; i<strlen(str); i++){
        str[i] = (str[i] - key) % 255;  // Subtrai a chave em vez de somar
    }

    printf("String Descriptografada: %s \n", str);

    return 0;
}
