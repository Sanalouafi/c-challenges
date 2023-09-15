#include <stdio.h>

int main() {
   float a,b,c,d,s=0,m=0;
   printf("entrer 4 nombres pour calculer la somme et la moyenne :\n");
   scanf("%f%f%f%f",&a,&b,&c,&d);
   s=a+b+c+d;
   printf("la somme est : %.2f\n",s);
   m=s/4;
   printf("la moyenne est: %.2f\n",m);


    return 0;
}
