#include<stdio.h>

main()
{
	int i,b=7;
	for(i=1; i<=9; i+=2){
		printf("I=%d J=%d\n",i,b);
		printf("I=%d J=%d\n",i,b-1);
		printf("I=%d J=%d\n",i,b-2);
	}
}
