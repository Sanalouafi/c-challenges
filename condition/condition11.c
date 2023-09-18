
#include <stdio.h>

int main() {
    char *jour[]={"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};
    int randj=srand()%7;
    printf("le jour aleatoire :%s\n",jour[randj]);
    return 0;
}
