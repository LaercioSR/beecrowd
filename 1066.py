count_even = 0
count_odd = 0
count_positive = 0
count_negative = 0

for i in range(5):
    number = float(input())

    if number % 2 == 0:
        count_even += 1
    else:
        count_odd += 1

    if number > 0:
        count_positive += 1
    elif number < 0:
        count_negative += 1

print(count_even, "valor(es) par(es)")
print(count_odd, "valor(es) impar(es)")
print(count_positive, "valor(es) positivo(s)")
print(count_negative, "valor(es) negativo(s)")