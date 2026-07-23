#include <stdio.h>
struct anes{
int age;
float avg;
};
int main()
{
    struct anes e;
   printf("give age=");
   scanf("%d",&e.age);
   printf("give avg=");
   scanf("%f",&e.avg);
   printf("age is %d and avg is %.2f",e.age,e.avg);
    return 0;
}
