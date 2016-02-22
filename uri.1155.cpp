#include<stdio.h>

main()
{
	float i;
	float sum=0;
	for(i=1; i<=100; i++){
		float li=(1/i);
		sum+=li;
	}
	printf("%.2f\n",sum);
}
