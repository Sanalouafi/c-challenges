
#include <stdio.h>

int main() {
    char c;
   printf("entrer un caractere:");
   scanf(" %c", &c);

   int valeur=(int)c;
   if(valeur>=65 && valeur<=90){
       printf("votre caractere est majuscule");
   }
   else{
         printf("votre caractere est miniscule");

   }
    return 0;
}
