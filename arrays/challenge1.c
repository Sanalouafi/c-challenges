
#include <stdio.h>

int main() {
    int t[10],i;
    printf("entrer 10 entiers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&t[i]);
    }
    printf("le tableau devient:\n");
    for(i=0;i<10;i++){
        if(i==9){
          printf("%d",t[i]);  
          break;
        }
        printf("%d,",t[i]);
    }

    return 0;
}
