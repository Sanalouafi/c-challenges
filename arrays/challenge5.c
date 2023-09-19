#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main(){
 	char nom[50];
 	int lon,i;
 	printf("enter votre nom: ");
 	gets(nom);
 	puts(nom);
 	lon=strlen(nom);
 	printf("la longeur de votre nom est : %d",lon);
 	
 }
