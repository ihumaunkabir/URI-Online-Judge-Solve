#include<stdio.h>

main()
{
	int a;
	int al =0,gas=0,dis=0;
	while(1){
		scanf("%d",&a);
		if(a==4) break;
		else if(a==1) al=al+1;
		else if(a==2) gas=gas+1;
		else if(a==3) dis = dis+1;
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",al);
	printf("Gasolina: %d\n",gas);
	printf("Diesel: %d\n",dis);
}
