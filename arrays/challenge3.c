
#include <stdio.h>

int main() {
    int t[10],i,j,p=0,temp;
    printf("entrer 10 entiers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&t[i]);
    }
    printf("votre tableau devient:\n");
    
    for(i=0;i<10;i++){
    
    	for(j=i+1;j<10;j++){
    		if(t[i]<t[j]){
    			p=t[i];
    			t[i]=t[j];
    			t[j]=p;
			}
		}
		
    
    }
    for(i=0;i<10;i++){
        printf("%d \t",t[i]);
    }

    return 0;
}
