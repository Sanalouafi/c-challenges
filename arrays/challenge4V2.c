#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,nbN=0,noteG,noteM,nbS=0,s=0,i,indice,indiceMax;
	int notes[n];
	float m=0;
	printf("entrer le nombre des notes que vous voullez entrer :");
	scanf("%d",&n);
	printf("entrer une note qui est exsite dans l'intervalle suivante [0-20]\n");	
	for(i=0;i<n;i++){
		
		do{
			printf("entrer la note %d:",i+1);
			scanf("%d",&notes[i]);
		
			
		}while(notes[i]<0 || notes[i]>20);
		nbN++;
			s+=notes[i];
			m=s/n;
			
	}
	printf("le nombre des notes que vous saisie est: %d\n",nbN);
	printf("la somme de notes que vous saisie: %d\n",s);
	printf("la moyenne de notes que vous saisie: %.2f\n",m);
	for(i=0;i<n;i++){
		if(notes[i]<m){
			printf("la note %d est inferieur a la moyenne.\n",notes[i]);
		}
		else if(notes[i]==m){
			printf("la note %d est egale a la moyenne .\n",notes[i]);
		}
		else {
			printf("la note %d est superieur a la moyenne .\n ",notes[i]);
		nbS++;
		}
	}
	printf("le nombre des notes qui superieures a la moyenne est: %d\n",nbS);
	noteG=notes[0];
	noteM=notes[0];
	for(i=0;i<n;i++){
		
		if(noteG<notes[i]){
			noteG=notes[i];
			indiceMax=i;
		}
		if(noteM>notes[i]){
			noteM=notes[i];
			indice=i;
		}
	}
	printf("la note la plus grande est : %d et leur indice est: %d\n",noteG,indiceMax);
	printf("la note la plus petite est :%d et leur indice est :%d\n",noteM,indice);
	
	
	return 0;
	
}
