#include <stdio.h>

int Inverte(int n, int inv){

    if(n==0){
        return inv;
    }else{
        inv = inv*10 +n %10;
        return Inverte(n/10, inv);
    }
}

int main(){

    int n = 234, inv;
    inv = Inverte (n,0);
    printf("%d", inv);

    return 0;

}
