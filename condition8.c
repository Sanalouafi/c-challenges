#include <stdio.h>

int main() {
    float n1,n2,n3,n4,m=0,s=0;
   printf("entrer les 4 notes d'eleve:\nNote 1: ");
   scanf("%f",&n1);
   printf("Note 2: ");
   scanf("%f",&n2);
    printf("Note 3: ");
   scanf("%f",&n3);
    printf("Note 4: ");
   scanf("%f",&n4);
   s=n1+n2+n3+n3;
   m=s/4;
   printf("le moyenne est: %.2f\n",m);
   if(m<10){
   	printf("recale");
   }
   else if(m<12){
   	printf("passable");
   }
   else if(m<14){
   	printf(" assez bien");
   }
   else if(m<16){
   	printf("bien");
   }
   else {
   	printf("tres bien");
   }


    return 0;
}
