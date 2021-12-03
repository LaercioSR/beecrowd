lista = []

lista.append(float(input()))
lista.append(float(input()))
lista.append(float(input()))
lista.append(float(input()))
lista.append(float(input()))
lista.append(float(input()))

cont = 0
for x in lista:
    if x > 0:
        cont += 1

print(cont, "valores positivos")
