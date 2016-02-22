#include<stdio.h>

main()
{
	int i,n;
	scanf("%d",&n);
	n++;
	for(i=1; i<=6; i++){
		printf("%d\n",n);
		n=n+2;
	}
}
