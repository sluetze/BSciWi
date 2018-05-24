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
    first, *rest = wert
    print(first)
    if len(rest) > 1:
        rec_ausgabe(rest)

rec_ausgabe(x)


test = [1,2,3]
