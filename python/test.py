# imports
import random

# Initialisierung
geheimzahl = 4712
eingabe = 0
zaehler = 0

# Schleifenkopf und Schleifenkoerpert
while eingabe != geheimzahl:
  eingabe = int(input("Ganze Zahl eingeben: "))

  if eingabe < geheimzahl:
    print("Zahl zu klein")

  if eingabe > geheimzahl:
    print("Zahl zu groß")

  zaehler = zaehler + 1

print("Richtig! Sie haben" , zaehler, "Versuche benötigt.")
