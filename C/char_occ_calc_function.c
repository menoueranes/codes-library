#include<string.h>
#include <stdio.h>
int occ_char(char x, char t[]);
int occ_char(char x, char t[]){
int i,oc=0;
for(i=0;t[i]!='\0';i++){
    if(t[i]==x){
        oc++;
    }
}
return oc;
}
void occ_string(char t1[], char t2[]);
void occ_string(char t1[], char t2[]){
int i,socc[100];
for(i=0;t2[i]!='\0';i++){
    socc[i]=occ_char(t2[i],t1);
}
for(i=0;t2[i]!='\0';i++){
        printf("the char %c is repetted %d time\n",t2[i],socc[i]);
}
}
int main() {
char s[1000],r[1000];
int a;
printf("give a string:");
fgets(s,1000,stdin);
if(s[strlen(s)-1]=='\n')
    s[strlen(s)-1]='\0';
printf("give characters r:");
fgets(r,1000,stdin);
if(r[strlen(r)-1]=='\n')
    r[strlen(r)-1]='\0';
occ_string(s,r);
return 0;}
