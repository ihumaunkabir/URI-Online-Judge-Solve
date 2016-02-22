#include <stdio.h>

int main() {
	
	int i, odd=0,even=0,po=0,neg=0;
	int n;
	for(i=1; i<=5; i++){
		scanf("%d",&n);
		
		if(n%2==0) even+=1;
			else odd+=1;
		if(n>0) po+=1;
			else neg+=1;		
				}
				printf("%d valor(es) par(es)\n",even);
				printf("%d valor(es) impar(es)\n",odd);
				printf("%d valor(es) positivo(s)\n",po);
				printf("%d valor(es) negativo(s)\n",neg);
				
				return 0;
}
