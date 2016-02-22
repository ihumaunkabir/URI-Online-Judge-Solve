#include<stdio.h>

main()
{
	float i,b=1;
	for(i>=0; i<=2.2; i+=.2){
		printf("I=%.1f J=%.1f\n",i,b);
		printf("I=%.1f J=%.1f\n",i,b+1);
		printf("I=%.1f J=%.1f\n",i,b+2);
		b+=.2;
	}
}
