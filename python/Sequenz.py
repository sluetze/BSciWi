# Übungsblatt Sequenz
eingabe = input("Bitte geben Sie etwas ein:")
laenge = len(eingabe)
umfang = "keiner"
print("Die länge der Eingabe beträgt", laenge)

#Aufgabe 5
if laenge < 3:
    print("Es wurden weniger als drei Zeichen eingegeben")
    umfang = "kurz" #A8
#Aufgabe 6
#else:
#Aufgabe 7
elif laenge < 10: 
    print("Es wurden mehr als drei Zeichen, aber weniger als 10 eingegeben")
    umfang = "kurz" #A8
else:
    print("Es wurden sogar mehr als 10 Zeichen eingegeben!!!!1elf")
    umfang = "lang" #A8

print("Der Umfang ist:", lang) #A8
