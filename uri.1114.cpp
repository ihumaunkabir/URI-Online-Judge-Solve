#include <stdio.h>

main()
{
	int a;
	while(1){
		scanf("%d",&a);
		if(a==2002){
			printf("Acesso Permitido\n");
			break;
		}
		else if ( a!=2002){
			printf("Senha Invalida\n");
		}
	}
}
