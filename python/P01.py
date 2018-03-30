# imports
import random

# Initialisierung
upper = 100
lower = 1
geheimzahl = random.randrange(lower,upper,1)
eingabe = upper/2
zaehler = 0
maxversuche = 10
small = True

# Schleifenkopf und Schleifenkoerpert
while (eingabe != geheimzahl) and (zaehler < maxversuche):
  #eingabe = int(input("Ganze Zahl eingeben: "))
  print(24*'*', 'Versuch Nummer ', zaehler+1,24*'*')
  print(eingabe)

  if eingabe < geheimzahl:
    print("Zahl zu klein")
    small = False

  if eingabe > geheimzahl:
    print("Zahl zu groß")
    small = True

  zaehler = zaehler + 1

  ## Erraten der Zahl durch Komputa
  if small:
    upper = eingabe - 1
  else:
    lower = eingabe + 1

  if lower == upper:
    eingabe = lower
  else:
    eingabe = ((upper+lower)//2)

if (zaehler != maxversuche):
  print("Richtig! Sie haben" , zaehler, "Versuche benötigt.")
else:
  print("Nicht in", zaehler, "Versuchen geschafft")
