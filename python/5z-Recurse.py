def ausgabe(wert):
    if type(wert) is tuple:
        for elem in wert:
            ausgabe(elem)
    else:
        print(wert)

x=[1,2,(3,(4,5)), "foo"]
for elem in x:
    ausgabe(elem)#

ausgabe(x)


def rec_ausgabe(wert):
    print(wert[:1])
    if len(wert) > 1:
        print(rec_ausgabe(wert[1:]))
    else:
        print(wert[:1])

rec_ausgabe(x)


test = [1,2,3]
