#include <stdio.h>
int main(){
    int coofecients[]={6,5,5,3,3,3,1,1,1,1,1}; 
    char *modules[]={"analysis","physics","chemistry","algebra","computer_science","statistics","technical_drawing","french","english","economics","human_engineering"};
    float avg_s1=0,avg_s2=0,AVG,score[11],exam_marks[11],control_marks[11];
 printf("***welcome to the average calculator for 1st year preparatory school here you will know if you are good or cooked***\n\n\n");

           printf("*welcome to the first semester*\n\n");
           printf("your modules are:\n");
           for(i=0;i<11;i++){
    printf("%d - %s with coefficient %d\n",i+1,modules[i],coofecients[i]);}
    

    printf("let's begin with exam marks\n\n");
    printf("give your exam mark for module ");
    for(i=0;i<11;i++){
        printf("%s=",modules[i]);
        scanf("%f",&exam_marks[i]);
        while(exam_marks[i]<0 || exam_marks[i]>20){
            printf("invalid mark please give a mark between 0 and 20\n\n");
            printf("give your exam mark for module %s=",modules[i]);
            scanf("%f",&exam_marks[i]);
        }
    }
    
    
    printf("let's now go for control marks\n\n");
    printf("give your control mark for module ");
    for(i=0;i<11;i++){
        printf("%s=",modules[i]);
        scanf("%f",&control_marks[i]);
        while(control_marks[i]<0 || control_marks[i]>20){
            printf("invalid mark please give a mark between 0 and 20\n\n");
            printf("give your control mark for module %s=",modules[i]);
            scanf("%f",&control_marks[i]);
        }}
    
       for(i=0;i<11;i++){
           score[i]=(exam_marks[i]*0.6+control_marks[i]*0.4)*coofecients[i];
       }
    printf("let's now calculate your average for the first semester\n\n");
    for(i=0;i<11;i++){
        avg_s1=avg_s1+score[i];
    }
    avg_s1=avg_s1/(6+5+5+3+3+3+1+1+1+1+1);
    printf("your average for the first semester is %f\n\n",avg_s1);
   
    

    
    
    for(i=0;i<11;i++){
        score[i]=0;
    }


        printf("welcome to the second semester\n\n");

       modules[5]="probability";
       coofecients[0]=5;
       coofecients[3]=4;

printf("your modules are:\n");
for(i=0;i<11;i++){
    printf("%d - %s with coefficient %d\n",i+1,modules[i],coofecients[i]);}


printf("let's begin with exam marks\n\n");
    printf("give your exam mark for module ");
   for(i=0;i<11;i++){
        printf("%s=",modules[i]);
        scanf("%f",&exam_marks[i]);
        while(exam_marks[i]<0 || exam_marks[i]>20){
            printf("invalid mark please give a mark between 0 and 20\n");
            printf("give your exam mark for module %s=",modules[i]);
            scanf("%f",&exam_marks[i]);
        }}

 printf("let's now go for control marks\n\n");
    printf("give your control mark for module ");
 for(i=0;i<11;i++){
        printf("%s=",modules[i]);
        scanf("%f",&control_marks[i]);
    while(control_marks[i]<0 || control_marks[i]>20){
            printf("invalid mark please give a mark between 0 and 20\n");
            printf("give your control mark for module %s=",modules[i]);
            scanf("%f",&control_marks[i]);
        }
    }
    for(i=0;i<11;i++){
           score[i]=(exam_marks[i]*0.6+control_marks[i]*0.4)*coofecients[i];
}
printf("let's now calculate your average for the second semester\n");
    for(i=0;i<11;i++){
        avg_s2=avg_s2+score[i];}
        avg_s2=avg_s2/(5+5+5+4+3+3+1+1+1+1+1);
        printf("your average for the second semester is %f\n\n\n\n",avg_s2);
      
        
        AVG=(avg_s1+avg_s2)/2;
        printf("*your average for the year is.............  %f !*\n\n",AVG);
        if(AVG>=16){
            printf("amazing you are such a nerd");
        }
        else{
            if(AVG<10){
                printf("idiot you will have to repeat the year haha");
            }
            else{printf("good job!");}
        }
    



    return 0;}
