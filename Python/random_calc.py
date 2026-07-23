import random
r=random.uniform(0, 1)
print(r)
a=input("entrer le premier nombre: ")
b=input("entrer le deuxième nombre: ")
if r==0:
    print(f"r=0, donc le resultat de l'addition du premier nombre {a} et du deuxième nombre {b} est: {int(a)+int(b)}")
elif r==1:
    print(f"r=1, donc le resultat de la soustraction du premier nombre {a} et du deuxième nombre {b} est: {int(a)-int(b)}")
elif r==2:
    print(f"r=2, donc le resultat de la multiplication du premier nombre {a} et du deuxième nombre {b} est: {int(a)*int(b)}")
else:
    print(f"r={r}, donc le resultat de la division du premier nombre {a} et du deuxième nombre {b} est: {int(a)/int(b)}")    
