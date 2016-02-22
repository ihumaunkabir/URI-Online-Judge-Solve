#include <stdio.h>

main()
{
	int a,b,i;
	float div;
	int n;
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		scanf("%d %d",&a,&b);
			if(b==0) printf("divisao impossivel\n");
			else{
				div = a / b;
				printf("%.1f\n",(float)a/(float)b);
			}
	}
}
