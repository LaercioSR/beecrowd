salario = float(input())

if salario <= 2000:
    print("Isento")
elif salario > 2000 and salario <= 3000:
    print("R$ {:.2f}" .format((salario-2000) * 0.08))
elif salario > 3000 and salario <= 4500:
    print("R$ {:.2f}" .format(1000 * 0.08 + (salario-3000) * 0.18))
else:
    print("R$ {:.2f}".format(1000 * 0.08 +
          1500 * 0.18 + (salario-4500) * 0.28))
