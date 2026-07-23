#include <stdio.h>
#include <math.h>
int n,i,U_0,N;
float U[10000],Sum,pi;
int main()
{
    printf("give the value of N=");
    scanf("%d",&N);
    Sum=0;
    for(n=1;n<=N;n++){
    U[n]=((1.00)/(n*n));
     Sum=Sum+U[n];
     pi=sqrt(Sum*6);
    }
    for(n=1;n<=N;n++){
printf("U[%d]=%.10f\n",n,U[n]);

}
printf("pi=%.20f\n",pi);
    return 0;
}
