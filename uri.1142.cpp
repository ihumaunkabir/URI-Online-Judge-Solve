#include<stdio.h>

main()
{
	int t;
	int i;
	i=0;
	int num=1;
	scanf("%d",&t);
	while(i<t){
		printf("%d ",num);
		num=num+1;
		printf("%d ",num);
		num=num+1;
		printf("%d PUM\n",num);
		num=num+2;
		i++;
	}
}
