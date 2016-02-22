#include <stdio.h>

main()
{
	float a;
	scanf("%.2f",&a);
	printf("NOTAS:\n");
	printf("%f nota(s) de R$ 100.00",a/100);
	//a = a % 100;
}
