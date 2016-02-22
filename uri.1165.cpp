#include <stdio.h>

main()
{
	int i,n,i1=2,n1;
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		scanf("%d",&n1);
			for(i1=2; i1<=(n1-1); i1++){
				if(n1%i1==0){
					printf("%d nao eh primo\n",n1);
					break;
				}
			}
			if(i1==n1){
				printf("%d eh primo",n1);
				
			}
	}
}
