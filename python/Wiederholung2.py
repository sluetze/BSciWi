for zahl in range(1, 11):
    print(zahl)
print(24*'-')

for zahl in range(-10,11):
    print(zahl)
print(24*'-')

for zahl in range(10,-1,-1):
    print(zahl)
print(24*'-')

for zahl in range(1,21):
    #print(zahl if not zahl%2 else pass)
    if zahl%2: #0 = False!!
        print(zahl)
print(24*'#')

#A14
i = [2,3,5,7,11,13]
for x in i:
    print(x,":",x**2)

