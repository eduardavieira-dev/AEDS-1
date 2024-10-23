/* 
* 4. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. 
*/

#include <stdio.h>
#include <ctype.h>  

int main(){
    char palavra[100];

    printf("Digite uma palavra para transformar as letras em maiusculas: ");
    fgets(palavra, sizeof(palavra), stdin);  

    
    for(int i = 0; palavra[i] != '\0'; i++){
        palavra[i] = toupper(palavra[i]);
    }

    printf("Palavra convertida: %s", palavra);

    return 0;
}
