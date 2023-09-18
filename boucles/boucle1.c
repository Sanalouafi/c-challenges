
#include <stdio.h>

int main() {
   int j,i,l,k;
   printf("entrer le nombre des lignes :");
   scanf("%d",&l);
//   for(i=1;i<=l;i++){
//       for(j=1;j<=i;j++){
//           printf("* ");
//       }
//       printf("\n");
//   }
for(i=1;i<=l;i++){
    for(j=1;j<=l-i;j++){
        printf("  ");
    }
    for(k=1;k<=2*i-1;k++){
        printf("* ");
    }
    printf("\n");
}
    return 0;
}
