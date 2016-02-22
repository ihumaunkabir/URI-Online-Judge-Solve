#include <stdio.h>
int main(){
	int count,n,x=0,y=1,display=0;
	scanf("%d",&n);
	printf("%d %d ",x,y);
	count=2;
	while (count<n){
		display=x+y;
		x=y;
		y=display;
		++count;
		printf("%d ",display);
		
	}
	
	return(0);
}
