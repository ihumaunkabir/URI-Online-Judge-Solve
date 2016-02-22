#include<stdio.h>

main()
{
	int t,i,x,sum=0;
	int n,i1=0;
	scanf("%d",&t);
	while(i1<t){
		scanf("%d",&n);
		for(i=2; i<=(n-1); i++){
		if(n%i==0){
			printf("Not Prime\n");
			break;
		}
	
		}
			if(i==n) printf("Prime\n");
			i1++;
		}
		
	
		
	
	}

