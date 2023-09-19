#include <stdio.h>
#include <stdlib.h>
int somme (int var1,int var2){
	int s=0;
	s=var1+var2;
	return s;
}
int main(){
	int va1,va2;
	printf("entrer deux entiers pour la somme:\n");
	scanf("%d\n%d",&va1,&va2);
	printf("le resultat est :%d",somme(va1,va2));
}
