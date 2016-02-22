#include <stdio.h>
 
int main() {
 
  int tc,n,in,out,i;
  scanf("%d",&tc);
  for(i=1; i<=tc; i++){
      scanf("%d",&n);
      if(n>=10 && n<=20){
          in+=1;
      }
      else if(n<10 && n>20){
          out+=1;
      }
  }
  printf("%d in\n%d out",in,out);
 
    return 0;
}
