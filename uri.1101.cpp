#include<stdio.h>

main()
{
	int i,a,b;
	int sum=0;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0 || b==0) break;
		else if(a>b){
			for(i=b; i<=a; i++){
				sum+=i;
					printf("%d ",i);
			}
				printf("Sum=%d\n",sum);
		}
		else if(a<b) {
			for(i=a; i<=b; i++){
				sum+=i;
					printf("%d ",i);
			}
				printf("Sum=%d\n",sum);
			
		}
		sum=0;

	}
}
