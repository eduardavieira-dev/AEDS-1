/* 
* 2. Desenvolva um programa para criptografar uma string. Para isso, solicite ao usuário uma
* chave k, correspondente a um número inteiro. Para criptografia, obtenha o número ASCII de
* cada uma das letras e some a cada uma delas o valor à chave k. Converta a letra obtida
* novamente para string, para gerar a letra criptografada.
* Dica: Para evitar que a soma seja superior a 255, fora do intervalo da tabela ASCII, divida o
* valor da soma por 255.
* Ex.: Lcripto = (L + k) % 255, onde L = ASCII da letra
*/

#include <stdio.h>


int main(){
    
    char str[100];
    int key;

    printf("Digite uma palavra: ");
    gets(str);
    printf("Digite uma chave: ");
    scanf("%d", &key);

    for(int i=0; i<strlen(str); i++){
        //strlen calcula a qtd de caracteres
        str[i] = (str[i]+ key) % 255;
    }

    printf("String Criptografada: %s \n", str);

    return 0;
}