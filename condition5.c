#include <stdio.h>
#include <math.h>
int main() {
    int ans,m;
    printf("entrer le nombre d'annee que vous voullez convertis: ");
    scanf("%d",&ans);
    printf("Menu:\n1-Mois\n2-Jours\n3-Heures\n4-Minutes\n5-Secondes\n");
    scanf("%d",&m);
    switch(m){
        case 1:
        printf("l'annee en mois est:%d Mois",ans*12);
        break;
        case 2:
        printf("l'annee en jours est:%d jours",ans*365);
        break;
        case 3:
        printf("l'annee en heures est:%d heures",ans*365*24*60);
        break;
        case 4:
        printf("l'annee en minutes est:%d minutes",ans*365*24*60);
        break;
        case 5:
        printf("l'annee en seconds est:%d secondes",ans*365*24*60*60);
        break;
        default:
        printf("error");
        break;
    }

return 0;
}
