lista = []

lista.append(int(input()))
lista.append(int(input()))
lista.append(int(input()))
lista.append(int(input()))
lista.append(int(input()))

cont = 0
for x in lista:
    if x % 2 == 0:
        cont += 1

print(cont, "valores pares")
