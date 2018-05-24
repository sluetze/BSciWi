import random
# Aufgabe 1
#zufallszahlen = list()
#for i in range(1,21):
#    zufallszahl = random.randrange(1,1000,1)
#    #print(zufallszahl)
#    zufallszahlen += zufallszahl,

zufallszahlen = [random.randint(1,1000) for i in range(1,21)]

print(zufallszahlen)
print(f"Wir haben {len(zufallszahlen)} Elemente in der liste")


# Aufgabe 2
teilbar7 = [x for x in zufallszahlen if x%7 == 0]
print("Teilbar durch sieben:",teilbar7)

# Aufgabe 3
#teilbar7index = [x,index(x) for x in zufallszahlen if x%7 == 0]
#print(teilbar7index)
teilbar7index = list()
index = 0
for elem in zufallszahlen:
    if (elem%7 == 0):
        saveme = zufallszahlen.index(elem), elem
        teilbar7index.append(saveme)

print(teilbar7index)

# Aufgabe 4
mit_ziffer_0 = [x for x in zufallszahlen if '0' in str(x) ]
print(mit_ziffer_0)

# Aufgabe 5
print(len(mit_ziffer_0))

# Aufgabe 6
print(sum([str(x).count('0') for x in mit_ziffer_0]))
