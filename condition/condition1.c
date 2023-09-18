#include <stdio.h>

int main() {
   int nomb;
    printf(" Entree un nombre :");
    scanf("%d",&nomb);
    if(nomb%2==0){
        printf("le nombre est paire");
    } else {
        printf("le nombre est impaire");
    }

    return 0;
}
