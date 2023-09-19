#include <stdio.h>
#include <stdlib.h>
int main (){
	int notes[100],note,indice,indiceMax,nbN=0,noteG=0,noteM=0,nbS=0,s=0,i;
	float m=0;
	printf("entrer les notes entre 0 et 20 et pour quitter la saisie entrer une valeur hors cet intervalle:\n");
	
	while(1){
		scanf("%d",&note);
		
		if(note<0 || note>20){
			break;
		}
		notes[nbN]=note;
		nbN++;
		s+=note;
		m=s/nbN;
	}
	if (nbN==0) {
        printf("Aucune note n'a ete saisie. Programme terminé.\n"); 
    }else{
	
	printf("le nombre des notes que vous saisie est: %d\n",nbN);
	printf("la somme de notes que vous saisie: %d\n",s);
	printf("la moyenne de notes que vous saisie: %.2f\n",m);
	for(i=0;i<nbN;i++){
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
	for(i=0;i<nbN;i++){
		
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
	
       }
	return 0;
}
