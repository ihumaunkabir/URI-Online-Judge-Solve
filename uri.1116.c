#include <stdio.h>
 
int main() {
 
    int X,Y,tc;
    float res;
    scanf("%d",&tc);
   while(tc--){
        scanf("%d %d",&X,&Y);
    if(Y == 0)printf("divisao impossivel\n");
    else{
	res = X/Y;
	printf("%.1f\n",res);}
 
   }
    return 0;
}
//not accepted

