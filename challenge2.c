#include <stdio.h>

int main()
{
    float f,c=0;

    printf("Entrer la température en Fahrenheit : ");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("la temperateur en Celsius:%f\n",c);
    if(c<0) {
        printf("La sensation ressentie est : très froid\n");
    } else if (c<17) {
        printf("La sensation ressentie est : froid\n");
    } else if (c<30) {
        printf("La sensation ressentie est : chaud\n");
    } else {
        printf("La sensation ressentie est : très chaud\n");
    }

    return 0;
}
