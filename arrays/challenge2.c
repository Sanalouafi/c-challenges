
#include <stdio.h>

int main() {
    int t[10],i,max=0,min=0;
    printf("entrer 10 entiers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&t[i]);
    }
    printf("le tableau devient:\n");
    max=t[0];
    min=t[0];
    for(i=0;i<10;i++){
       if(max<t[i+1]){
       	max=t[i+1];
	   }
	   if(min>t[i+1]){
       	min=t[i+1];
	   }
       
    }
    printf("le min est: %d\n",min);
    printf("le max est: %d\n",max);

    return 0;
}
