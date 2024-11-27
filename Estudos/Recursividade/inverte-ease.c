#include <stdio.h>

int inverte(int n, int rev){
    if(n==0){
        return rev;//condiacao de parada
    }
 
    return inverte(n / 10, rev * 10 + n % 10);

}

int main(){
    int n, rev;

    scanf("%d", &n);

    printf("%d", inverte(n, rev));

    return 0;
}