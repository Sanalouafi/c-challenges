#include <stdio.h>

int main() {
   int val1,val2;
   printf("entrer deux valeurs:\n");
   scanf("%d%d",&val1,&val2);
   if(val1==val2){
       printf("la somme de deux valeurs est: %d",val1+val2);
       printf("\nles nombres sont identiques donc le triple de votre somme est: %d",(val1+val2)*3);
   }else{
      printf("\nla somme de deux valeurs est: %d",val1+val2);
   }

return 0;
}
