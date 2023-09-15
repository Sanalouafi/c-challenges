#include <stdio.h>
#include <math.h>
int main() {
   float x1,y1,x2,y2,distance=0;
   printf("entrer les coordonnees de point M: ");
   scanf("%f%f",&x1,&y1);
   printf("entrer les coordonnees de point N: ");
   scanf("%f%f",&x2,&y2);
   printf(" les coordonnees de point M sont: M(%.1f,%.1f)\n",x1,y1);
   printf("les coordonnees de point N sont: N(%.1f,%.1f)\n",x2,y2);
   distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

   printf("la distance entre M(%.1f,%.1f) et N(%.1f,%.1f) est :%.1f",x1,y1,x2,y2,distance);





    return 0;
}
