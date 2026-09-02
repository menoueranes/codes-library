a=[0] * 101
for i in range(1, 101):
     a[i] = f"{i} is off"

for j in range(1, 101):     
    for i in range(1, 101):
        if i % j == 0:
           if a[i].endswith("off"):
                a[i] = f"{i} is on"
           else:
                a[i] = f"{i} is off"
    if a[j].endswith("on"):
        print(a[j])



        





