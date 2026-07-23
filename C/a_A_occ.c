#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i;
   char arr[100],t;
   int c=0;
   printf("enter number of characters:");
   scanf("%d",&n);
   printf("enter %d characters:\n",n);
   for(i=0;i<n;i++){
    t=getchar();
    while((t=='\n')||(t=='?'))
    {
        t=getchar();
    }
    arr[i]=t;
   }
    for(i=0;i<n;i++){
        if((arr[i]=='A')||(arr[i]=='a')){
            c++;}}
        printf("%d\n",c);








     return 0;
}
