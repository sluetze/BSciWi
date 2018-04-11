import math
months = ['januar','februar','maerz','april','mai','juni','juli','august','september','oktober','november','dezember']
q1 = ['januar','februar','maerz']
q2 = ['april','mai','juni']
q3 = ['juli','august','september']
q4 = ['oktober','november','dezember']
year = [q1,q2,q3,q4] #zweidimensionale Liste

#A1
print(24*'*','Aufgabe 1',24*'*')
month = input("Bitte geben Sie einen Monat ein: ").lower()
if month not in months:
    print("Fehlerhafte Eingabe")
else:
    position = months.index(month) +1
    # Mathematische Lösung
    quartal = math.ceil(position/3)
    print("Der Monat befindet sich im ", quartal, " Quartal")

    #manuelle Lösung
    if position <= 3:
        print("Der Monat befindet sich im ersten Quartal")
    elif position <= 6:
        print("Der Monat befindet sich im zweiten Quartal")
    elif position <= 9:
        print("Der Monat befindet sich im dritten Quartal")
    elif position <= 12:
        print("Der Monat befindet sich im vierten Quartal")

#A2
    print(24*'*','Aufgabe 2',24*'*')
    if month in q1:
        print("Der Monat befindet sich im ersten Quartal")
    elif month in q2:
        print("Der Monat beindet sich im zweiten Quartal")
    elif month in q3:
        print("Der Monat beindet sich im dritten Quartal")
    elif month in q4:
        print("Der Monat beindet sich im vierten Quartal")

print(24*'*','Aufgabe 3',24*'*')
monate = ["mai","maerz","april","januar"]
for monat in monate:
    if monat in q1:
        print("Der Monat", monat, "befindet sich im ersten Quartal")
    elif monat in q2:
        print("Der Monat", monat, "befindet sich im zweiten Quartal")
    elif monat in q3:
        print("Der Monat", monat, "befindet sich im dritten Quartal")
    elif monat in q4:
        print("Der Monat", monat, "befindet sich im vierten Quartal")
    else:
        print("Fehlerhafte eingabe")

print(24*'*','Aufgabe 4',24*'*')
for x in range(0,3):
    print(q1[x],q2[x],q3[x],q4[x],sep = ",")

# Lösung über zweidimensionale Liste
for i in range(0,3):
    for j in range(0,4):
        print(year[j][i],",", sep = "", end = '')
    print("")

print(24*'*','Aufgabe 5',24*'*')
x = [1,3,2,12,8]
y= [4,2,7,9,4]

if len(x) == len(y):
    for i in range(0,len(x)):
        produkt = x[i] * y[i]
        if produkt > 100:
            print("Produkt > 100. Berechnung FAILED")
            break
    else:
        print("Kein Produkt >100. Alles erfolgreich")
