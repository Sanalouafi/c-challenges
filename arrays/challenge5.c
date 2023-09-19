#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main(){
 	char nom[50];
 	int lon,i;
 	printf("enter votre nom: ");
 	scanf("%s",&nom);
 	lon=strlen(nom);
 	printf("votre nom est : %s \n et sa longeur est : %d",nom,lon);
 	
 }
