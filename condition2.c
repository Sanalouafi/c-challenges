
#include <stdio.h>

int main() {
   char cara,c;
   printf("entrer un caractere: ");
   scanf("%c",cara);
   c=getchar();
   printf("votre caractere est: %c\n",c);

  switch(c){
      case 'a':
         printf("le caractere que vous entree est une voyelle");
         break;
      case 'e':
         printf("le caractere que vous entree est une voyelle");
         break;
      case 'i':
         printf("le caractere que vous entree est une voyelle");
         break;
      case 'o':
         printf("le caractere que vous entree est une voyelle");
         break;
      case 'u':
      printf("le caractere que vous entree est une voyelle");
         break;
      case 'y':
         printf("le caractere que vous entree est une voyelle");
         break;
      default:
         printf("le caractere que vous entree n'est pas une voyelle ");
  }
    return 0;
}
