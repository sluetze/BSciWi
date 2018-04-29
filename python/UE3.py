text_1 = "Hallo Welt!"
text_2 = "FOM"
tupel = (1,2,3,4,5,6,7,8,9,10)
liste_1 = [1,2,3,4,5,6,7,8,9,10]
liste_2 = [6,7,8,9,10,11,12,13,14,15]
zahl_1 = 6
zahl_2 = 12

#A1
print("Aufgabe 1:")
print(len(tupel))
print(len(text_1))

#A2
print("Aufgabe 2:")
text_1[0]
text_1[-1]
# in einem Befehl:
text_1[::len(text_1)-1]

tupel[0]
tupel[-1]
tupel[::len(tupel)-1]

#A3
text_1[:3]
tupel[:3]
text_1[-3:]
tupel[-3:]

#A4
liste_1[::2]

#A5
max(text_1)
min(liste_2)

#A6
liste_1 = [1,2,3,4,5,6,7,8,9,10]
liste_1 *= 3
print(liste_1)

#A7
gesamtliste = liste_1 + liste_2
gesamtliste += tupel
print(gesamtliste)
len(gesamtliste)

#A8
print(zahl_1 in gesamtliste)
print(zahl_1, "kommt vor" if zahl_1 in gesamtliste else "kommt nicht vor")

#A9
if zahl_1 in gesamtliste:
    print(gesamtliste.index(zahl_1)+1)
else:
    print("Zahl existiert nicht")

#A10
count=0
for elem in gesamtliste:
    if elem == zahl_1:
        count += 1
print(count)
## besser:
gesamtliste.count(zahl_1)

#A11
index = 0
for elem in gesamtliste:
    if elem == zahl_1:
        print(index)
    index += 1
# in Klug:
for index, zahl in enumerate(gesamtliste):
    if zahl == zahl_1:
        print("gefunden an Pos.", index)

#A12
text = text_1.partition(' ')[0]+ " "+ text_2 + "!"
text = text_1[:text_1.index(" ")]+ " "+ text_2 + "!"
print(text)
