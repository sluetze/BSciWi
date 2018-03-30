#A15
liste = []

print("Programmabbruch durch Eingabe negativer Zahl")
while len(liste) < 3:
    string = "Bitte " + str(len(liste)+1) + ". positive Zahl eingeben"
    eingabe = int(input(string))
    if eingabe < 0:
        break
    liste += [eingabe]
else:
    for x in liste:
        print(x,":",x**2)
    
#A16 do nothing and chill
for x in range(10):
    pass
