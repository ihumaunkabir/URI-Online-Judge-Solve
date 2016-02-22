#include <stdio.h>

main()
{
	int n, i, sum=0;
	for(i=1; i<=2; i++){
		scanf("%d",&n);
		if(n%2 !=0){
			sum= sum + n;
		}
	}
	printf("%d\n",sum * -1);
}

//not accepted 
