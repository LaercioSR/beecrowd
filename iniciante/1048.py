salario = float(input())

if salario <= 400:
    novoSalario = salario * 1.15
    print("Novo salario: {:.2f}" .format(novoSalario))
    print("Reajuste ganho: {:.2f}" .format(novoSalario-salario))
    print("Em percentual: 15 %")

elif salario > 400 and salario <= 800:
    novoSalario = salario * 1.12
    print("Novo salario: {:.2f}" .format(novoSalario))
    print("Reajuste ganho: {:.2f}" .format(novoSalario-salario))
    print("Em percentual: 12 %")

elif salario > 800 and salario <= 1200:
    novoSalario = salario * 1.10
    print("Novo salario: {:.2f}" .format(novoSalario))
    print("Reajuste ganho: {:.2f}" .format(novoSalario-salario))
    print("Em percentual: 10 %")

elif salario > 1200 and salario <= 2000:
    novoSalario = salario * 1.07
    print("Novo salario: {:.2f}" .format(novoSalario))
    print("Reajuste ganho: {:.2f}" .format(novoSalario-salario))
    print("Em percentual: 7 %")

else:
    novoSalario = salario * 1.04
    print("Novo salario: {:.2f}" .format(novoSalario))
    print("Reajuste ganho: {:.2f}" .format(novoSalario-salario))
    print("Em percentual: 4 %")
