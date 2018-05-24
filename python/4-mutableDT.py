#Aufgabe 1

gerade = list(range(2,21,2))
#gerade = [2,4,6,8,10,12,14,16,18,20]
ungerade = list(range(1,21,2))
#ungerade = [1,3,5,7,9,11,13,15,17,19]

print("gerade:  ",gerade)
print("ungerade:",ungerade)

#Aufgabe 2
alle = gerade + ungerade
alle.sort()
print(alle)


#Aufgabe 3
a,b,c = gerade[:3]
print(a,b,c)

#Aufgabe 4
gerade_mal_zehn = [x*10 for x in gerade]
print(gerade_mal_zehn)

#Aufgabe 5
gerade[1::2] = gerade_mal_zehn[1::2]
print(gerade)

#Aufgabe 6
gerade_mal_zehn.sort(reverse=True)
print(gerade_mal_zehn)

#Aufgabe 7
zahlen = list(range(-4,4))
zahlen.sort(key=abs)
print(zahlen)

#Aufgabe 8
einkaufsliste = ["Äpfel","Birnen","Orangen","Bananen"]
print(einkaufsliste)

#Aufgabe 9
for i in range(len(einkaufsliste)-1,-1,-1):
    einkaufsliste.insert(i,'Schokolade')

print(einkaufsliste)

#Aufgabe 10
einkaufsliste[0] = 'Erdnüsse'
print(einkaufsliste)

#Aufgabe 11
einkaufsliste = [x for x in einkaufsliste if einkaufsliste.index(x)%2]
print(einkaufsliste)

#Aufgabe 12
einkaufsliste2 = einkaufsliste.copy()
print("ID von Einkaufsliste:", id(einkaufsliste))
print("ID von Einkaufsliste2:", id(einkaufsliste2))

#Aufgabe 13
einkaufsliste.reverse()
print(einkaufsliste)

#Aufgabe 14
for e in range(0,len(einkaufsliste)):
    print(einkaufsliste[0])
    einkaufsliste.pop(0)
print(einkaufsliste)

#Aufgabe 15
einkaufsliste2 += 'Studentenfutter',
print(einkaufsliste2)

#Aufgabe 16
einkaufsliste2.remove('Birnen')
print(einkaufsliste2)

#Aufgabe 17
vornamen = ['Erwin','Walter','Lieselotte','Heinrich','Gwyneth']
nachnamen = ['Lindemann','Hoppestedt','Hoppenstedt','Loose','Molesworth']
anrede = ['Hr.','Hr.','Fr.','Hr.','Fr.']

#Aufgabe 18
anreden_neu = ['Herr' if x == 'Hr.' else 'Frau' for x in anrede ]
print(anreden_neu)

#Aufgabe 19
personen = list(zip(anreden_neu,vornamen,nachnamen))
print(personen)

#Aufgabe 20
index = 1
for x,y,z in personen:
    print(index,":",x,y,z)
    index += 1

#Aufgabe 21
# siehe OneNoteA
