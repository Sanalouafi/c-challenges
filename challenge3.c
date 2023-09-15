#include <stdio.h>

int main() {
   float a,b;
   printf("entrer le premier nombre (a): ");
   scanf("%f",&a);
   printf("entrer le deuxiem nombre (b): ");
   scanf("%f",&b);
   printf("la somme de deux nombres est : %.2f\n",a+b);
   printf("la substraction de deux nombres est : %.2f\n",a-b);
   printf("la multiplication de deux nombres est : %.2f\n",a*b);
   if(b!=0){
   printf("la division de deux nombres est : %.2f\n",a/b);
   printf("le module de deux nombres est : %.2f\n",fmod(a, b));
   }

   else{
   printf("la division par 0 est impossible ");
   }

    return 0;
}
