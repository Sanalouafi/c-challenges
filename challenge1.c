#include <stdio.h>

int main() {
    char nom[10];
    char prenom[10];
    char sexe[10];
    int age;
    char num[10];

    printf("Entrer votre nom : ");
    scanf("%s", nom);

    printf("Entrer votre prenom : ");
    scanf("%s", prenom);

    printf("Entrer votre age : ");
    scanf("%d",&age);

    printf("Entrer votre sexe : ");
    scanf("%s", sexe);

    printf("Entrer votre numero : ");
    scanf("%s", num);
    printf("votre nom est: %s\n",nom);
    printf("votre prenom est: %s\n",prenom);
    printf("votre age est: %d\n",age);
    printf("votre sexe est: %s\n",sexe);
    printf("votre numero est: %s\n",num);


    return 0;
}
