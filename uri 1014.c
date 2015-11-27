#include <stdio.h>
  
int main() {
  
   int X;
   float Y, km;
   scanf("%d %f", &X, &Y);
   km = X / Y;
   printf("%.3f km/l\n", km);
  
    return 0;
}
