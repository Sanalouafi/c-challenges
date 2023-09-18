
#include <stdio.h>

int main() {
   int i,temp=0,n;
   printf("entrer un nombre :");
   scanf("%d",&n);
   for(i=1;i<10;i++){
       if(n%i==0){
           temp++;
       }
   }
    if(temp==2){
           printf("le nombre est un nombre premier");

       }else{
           printf("le nombre n'est un nombre premier ");
       }
    return 0;
}
