#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
   float delta,x1,x2,x;
   printf("entrer la valeur de a,b et c de votre equation \npar exemple:ax2+bx+c = 0\n");
   printf("entrer a:");
   scanf("%d",&a);
   printf("entrer b:");
   scanf("%d",&b);
   printf("entrer c:");
   scanf("%d",&c);
   printf("votre equation devient:%dx^2+%dx+%d=0\n",a,b,c);
   delta=pow(b,2)-4*a*c;
   printf("Δ est: %.2f\n",delta);
  if(delta<0){
        printf("ona Δ<0,donc cette équation n'admet pas de solutions réelles");
        }
  else if(delta==0){
         printf("ona Δ=0 ,donc cette equation admet une solution unique x=(-b)/2*a\n");
         x=(-b)/2*a;
         printf("donc x=%.2f\n",x);

  }
 else{
          printf("on a Δ>0,donc cette equation admet deux solutions distinctes   x1,x2");
          x1=(-b-sqrt(delta))/2*a;
          x2=(-b+sqrt(delta))/2*a;
          printf("donc x1=%.2f\n",x1);
          printf("donc x2=%.2f\n",x2);

 }



return 0;
}
