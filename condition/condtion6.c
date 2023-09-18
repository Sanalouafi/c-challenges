// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
   printf("entrer un nombre:");
   scanf("%d",&n);
   if(n<0){
          printf("votre nombre est un nombre negatif");

   }
   else if(n>0){
          printf("votre nombre est un nombre positif");

   }
   else {
          printf("votre nombre est un nombre null");

   }
    return 0;
}
