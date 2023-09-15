#include <stdio.h>

int main() {
   int nomb,inve,cent,daiz,uni;
   printf("entrer un entier à trois chiffres: ");
   scanf("%d",&nomb);
    if(99<nomb<1000){
        cent=nomb/100;
        daiz=(nomb/10)%10;
        uni=nomb%10;
        inve=uni*100+daiz*10+cent;
     printf("L'inverse du nombre est : %d\n", inve);

    }
    else{
        printf("Le nombre n'est pas à trois chiffres.\n");
    }

}
