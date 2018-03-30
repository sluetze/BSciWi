
while True:
    year = int(input("Bitte geben Sie ein Geburtsjahr ein, dass zwischen 1582 und 2015 liegt"))
    if year == 0:
        print("Abbruch auf Wunsch des Users")
        break
    elif year == 1:
        continue
    elif (year <= 1582) or (year >= 2015):
        print("Außerhalb des erlaubten bereichs")
    break

if year%4 == 0 and not year%100 == 0 or year%400 == 0:
    print("Dies ist ein Schaltjahr!")
