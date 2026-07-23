#include<stdio.h>
int t[1000],*p=t,n;
int main(){
printf("give the real size=");
scanf("%d",&n);
for(p=t;p<n+t;p++){
    printf("t[%d]=",p-t);
    scanf("%d",p);
}
for(p=t;p<n+t;p++){
        printf("t[%d]=%p\n",p-t,p);}
return 0;}
