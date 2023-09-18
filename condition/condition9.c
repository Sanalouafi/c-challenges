
#include <stdio.h>

int main() {
    char c;
   printf("entrer un caractere: ");
   scanf("%c",&c);
   if((c >='A' && c<= 'Z') || (c>='a' && c<='z')){
       printf("%c fait partie de l'alphabet.", c);
       int valeur=(int)c;
   if(valeur>=65 && valeur<=90){
       printf(" C'est une majuscule.\n");
   }
   else{
       printf(" C'est une minucule.\n");
   }
   }
   else{
      printf("%c n'est pas une lettre de l'alphabet.\n", c);

   }

    return 0;
}
