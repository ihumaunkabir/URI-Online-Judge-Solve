#include<stdio.h>

main()
{
	long long int a,b;
	while(scanf("%lld %lld",&a,&b) != EOF){
		long long int dif = a-b;
		if(b>a) dif= dif * -1;
		else if (a>b) dif=dif;
		printf("%lld\n",dif);
	}
}

