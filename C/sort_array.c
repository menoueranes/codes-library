#include <stdio.h>
int t[1000],*p=t,n,*q=t,m;
int main()
{
    printf("give the true size=");
    scanf("%d",&n);
    for(p=t;p<t+n;p++){
         printf("t[%d]=",p-t);
         scanf("%d",p);}
for(p=t;p<t+n;p++){
        for(q=p+1;q<t+n;q++){
            if(*p>*q){
                m=*p;
                *p=*q;
                *q=m;


            }
               }

                  }for(p=t;p<t+n;p++){
                      printf("t[%d]=%d\n",p-t,*p);
                      }
            return 0;}
/*#include <stdio.h>

int main()
{
    int T[100];
    int N, *p, m, *p1, *p2;

    printf("*** READING THE SIZE OF THE ARRAY ***\n");

    do
    {
        printf("N = ");
        scanf("%d", &N);
    }
    while((N < 1) || (N > 100));

    printf("\n*** READING THE VALUES OF THE ARRAY ***\n");

    for(p = T; p < T + N; p++)
    {
        printf("T[%d] = ", p - &T[0]);
        scanf("%d", p);
    }

    printf("\n*** PRINTING THE SORTED ARRAY ***\n");

    for(p1 = T; p1 < T + N - 1; p1++)
    {
        for(p2 = p1 + 1; p2 < T + N; p2++)
        {
            if(*p1 > *p2)
            {
                m = *p1;
                *p1 = *p2;
                *p2 = m;
            }
        }
    }

    for(p = T; p < T + N; p++)
        printf("T[%d] = %d\n", p - T,  *p);

    return 0;
}*/
