lista = []
listaOrder = []

listaOrder = input().split(" ")
listaOrder = [int(listaOrder[0]), int(listaOrder[1]), int(listaOrder[2])]
lista = [int(listaOrder[0]), int(listaOrder[1]), int(listaOrder[2])]
listaOrder.sort()

for x in listaOrder:
    print(x)

print()

for y in lista:
    print(y)