a=[0] * 101
for i in range(1, 101):
     a[i] = f"{i} is off"
for i in range(1, 101):
     if int(a[i].replace(" is off", "")) % i == 0 or int(a[i].replace(" is on", "")) % i == 0:
         if a[i].endswith("off"):
                a[i] = f"{i} is on"
         elif a[i].endswith("on"):
                a[i] = f"{i} is off"
     print(a[i])

    







