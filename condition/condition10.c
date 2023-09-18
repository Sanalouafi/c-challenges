
#include <stdio.h>

int main() {

    int mois,ans,jour;
   printf("entrer le jour: ");
   scanf("%d",&jour);
    printf("entrer le mois: ");
   scanf("%d",&mois);
    printf("entrer l'annee': ");
   scanf("%d",&ans);
   switch(mois){
       case 1:
       printf("votre date devient:%d Janvier %d",jour,ans);
       break;
        case 2:
       printf("votre date devient:%d Fevrier %d",jour,ans);
       break;
        case 3:
       printf("votre date devient:%d Mars %d",jour,ans);
       break;
        case 4:
       printf("votre date devient:%d Avril %d",jour,ans);
       break;
        case 5:
       printf("votre date devient:%d Mai %d",jour,ans);
       break;
        case 6:
       printf("votre date devient:%d Juin %d",jour,ans);
       break;
        case 7:
       printf("votre date devient:%d Juillet %d",jour,ans);
       break;
        case 8:
       printf("votre date devient:%d Aout %d",jour,ans);
       break;
        case 9:
       printf("votre date devient:%d Septembre %d",jour,ans);
       break;
        case 10:
       printf("votre date devient:%d Octobre %d",jour,ans);
       break;
        case 11:
       printf("votre date devient:%d Novembre %d",jour,ans);
       break;
        case 12:
       printf("votre date devient:%d Decembre %d",jour,ans);
       break;
   }


    return 0;
}
