triplets1 = [(x, y, z) for x in range(1, 100) 
            		  for y in range(x + 1, 100)
           			  for z in range(y + 1, 100)
           			  if x ** 2 + y ** 2 == z ** 2]
print(triplets1)
triplets2 = [ ]
for x in range(1, 100):
    for y in range(x + 1, 100):
        for z in range(y + 1, 100):
            if x ** 2 + y ** 2 == z ** 2:
                triplets2.append((x, y, z))
print(triplets2)
triplets3 = [(x, y, z) for x in range(1, 100) 
            		  for y in range(1, 100)
           			  for z in range(1, 100)
           			  if x ** 2 + y ** 2 == z ** 2 and x < y < z]
print(triplets3)
print(triplets1==triplets3)


P = input().split(',')

print([word for word in input().split(',') if 'e' not in word])

print("555""['2']")

a,b = "56"
s = f'{a*2:5}|{b:^5}|{a*3:>7}'

