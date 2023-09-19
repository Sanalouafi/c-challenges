#include <stdio.h>
#include <stdlib.h>
int PGCD (int var1,int var2){
	int pgcd=0,i;
	for(i=1;i<var1 && i<var2;i++){
		if(var1%i==0 && var2%i==0){
			pgcd=i;
		}
	}
	return pgcd;
}
int main(){
    printf(" le pgcd est :%d",PGCD(21,30));
}
