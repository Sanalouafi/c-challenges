#include <stdio.h>

int main() {
   int i, n, max = 0, s = 0;
   printf("Entrer le nombre d'entiers que vous voulez insérer : ");
   scanf("%d", &n);
   int tab[n];

   printf("Entrer les entiers :\n");
   for (i = 0; i < n; i++) {
       scanf("%d", &tab[i]);
   }

   printf("Les entiers saisis sont :\n");
   for (i = 0; i < n; i++) {
       printf("%d\t", tab[i]);
   }

   for (i = 0; i < n; i++) {
       if (tab[i] < 100 && tab[i] % 10 == 0) {
           s = s + tab[i];
           max=tab[0];
           if(max<tab[i]){
               max=tab[i];
           }
       }
       else{
           break;
       }
   }

   printf("\nLa somme des entiers < 100 et multiples de 10 est : %d\n", s);
    printf("\nLe max des entiers < 100 et multiples de 10 est : %d\n", max);
    printf("les elements que vous inserees ne sont pas des entiers < 100 et multiples de 10 ");

   return 0;
}
