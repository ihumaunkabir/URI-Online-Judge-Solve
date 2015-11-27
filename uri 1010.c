#include <stdio.h>
  
int main() {
  
    int  id1,id2,s1,s2;
    double p1,p2,a,b;
    while( scanf("%d %d %lf",&id1,&s1,&p1)==3){
        scanf("%d %d %lf",&id2,&s2,&p2);
        a=(p1*s1)+(p2*s2);
        printf("VALOR A PAGAR: R$ %.2f\n",a);
         
    }
    return 0;
}
