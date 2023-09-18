
#include <stdio.h>

int main() {
    int inverse=0,n;
    printf("entrer votre nombre:");
    scanf("%d",&n);
    while(n!=0){
        inverse=inverse*10+(n%10);
        n=n/10;
    }
    printf("le resultat est :%d",inverse);

    return 0;
}
