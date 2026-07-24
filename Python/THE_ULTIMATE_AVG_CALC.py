print("\n\n****Welcome to the Ultimate Average Calculator! for the first year prepa cycle****\n\n")
coefecient =[6,5,5,3,3,3,1,1,1,1,1]
exam_marks=[0]*11
control_marks=[0]*11
score=[0]*11
modules = ["Analysis","Physics","Chemistry","Statistics","Algebra","Computer_Scince","Technical_Drawing","English","French","Economy","Human_Enginnering"]
avg_s1=0
avg_s2=0
avg=0
print("**Let's start with the first semester**\n")
print("your modules are:\n")
for i in range(11):
       print(f"{modules[i]} with coefecient {coefecient[i]}\n ")
print("give your exam marks\n")
for i in range(11):
      exam_marks[i]=float(input(f"{modules[i]}="))
      while exam_marks[i]<0 or exam_marks[i]>20 :
             print("\n!*invalid marks please give a mark between 0 and 20*!\n")
             exam_marks[i]=float(input(f"{modules[i]}="))
print("now give your control marks\n")
for i in range(11):
       control_marks[i]=float(input(f"{modules[i]}="))    
       while control_marks[i]<0 or control_marks[i]>20 :
              print("\n!*invalide marks plesae give a marks between 0 and 20*!\n")
for i in range(11):
       score[i]=(exam_marks[i]*0.6+control_marks[i]*0.4)*coefecient[i]
       avg_s1=avg_s1+score[i]
avg_s1=avg_s1/(30)       
print(f"\n\nyour average for the first semester is ...... {avg_s1}\n\n")
print("**Now we go for the second semester**\n")
modules[3]="Probability"
coefecient[0], coefecient[4]=5, 4
print("your modules are:\n")
for i in range(11):
       print(f"{modules[i]} with coefecient {coefecient[i]}\n ")
print("give your exam marks\n")
for i in range(11):
      exam_marks[i]=float(input(f"{modules[i]}="))
      while exam_marks[i]<0 or exam_marks[i]>20 :
             print("\n!*invalid marks please give a mark between 0 and 20*!\n")
             exam_marks[i]=float(input(f"{modules[i]}="))
print("now give your control marks\n")
for i in range(11):
       control_marks[i]=float(input(f"{modules[i]}="))    
       while control_marks[i]<0 or control_marks[i]>20 :
              print("\n!*invalide marks plesae give a marks between 0 and 20*!\n")
for i in range(11):
       score[i]=(exam_marks[i]*0.6+control_marks[i]*0.4)*coefecient[i]
       avg_s2=avg_s2+score[i]
avg_s2=avg_s2/(30)       
print(f"\n\nyour average for the second semester is ...... {avg_s2}\n\n")
avg=(avg_s1+avg_s2)/2
print(f"**your average for the first year prepa cycle is**........................ !!! {avg} !!!")
if avg>17.5 :
       print("*!! THE WINNER TAKES IT ALL !!*")
elif avg>16 :
       print("good job you are such a nerd!")
elif avg>10 :
       print("you have to work more idiot")
else :
       print("LOSSER\n you have to wait another year to pass NIGGA")             
