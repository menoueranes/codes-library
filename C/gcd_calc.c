#include <stdio.h>
#include <stdlib.h>
int A,B,r,gcd;
int main()
{
   printf("give A=");
   scanf("%d",&A);
   printf("give B=");
   scanf("%d",&B);
   while(B>0){
    r=A%B;
   A=B;
   B=r;
   }

  gcd=A;
  printf("gcd=%d",gcd);
  return 0;
}
