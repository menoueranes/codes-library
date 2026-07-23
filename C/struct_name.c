#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Anes{
char name[100];
char first_name[100];
};
int main()
{
   struct Anes e;
   printf("give your name=");
   scanf("%s",&e.name);
   printf("give your first name=");
   scanf("%s",&e.first_name);
   printf("you are sir %s %s",e.name,e.first_name);
    return 0;
}
