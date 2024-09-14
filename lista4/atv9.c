

 #include <stdio.h>

 //SOMATORIO

int main() {

    float n1=2, s1=0, s2=0;
     float s;

     for(int i=0, j=15; i<15, j>=1; i++, j--){

         s1= pow(n1, i);
        //printf("%.0f\n", s1);

         s2= pow(j, 2);
         //printf("%.0f\n", s2);

         s+=s1/s2;

     }
    printf("S= %f\n", s);
     return 0;
 }

