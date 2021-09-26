valor = float(input())
reais = int(valor)
centavos = int((valor-reais)*100)

print("NOTAS:")

quant = reais // 100
reais %= 100
print("%d nota(s) de R$ 100.00" % quant)

quant = reais // 50
reais %= 50
print("%d nota(s) de R$ 50.00" % quant)

quant = reais // 20
reais %= 20
print("%d nota(s) de R$ 20.00" % quant)

quant = reais // 10
reais %= 10
print("%d nota(s) de R$ 10.00" % quant)

quant = reais // 5
reais %= 5
print("%d nota(s) de R$ 5.00" % quant)

quant = reais // 2
reais %= 2
print("%d nota(s) de R$ 2.00" % quant)


print("MOEDAS:")

quant = reais // 1
reais %= 1
print("%d moeda(s) de R$ 1.00" % quant)

quant = centavos // 50
centavos %= 50
print("%d moeda(s) de R$ 0.50" % quant)

quant = centavos // 25
centavos %= 25
print("%d moeda(s) de R$ 0.25" % quant)

quant = centavos // 10
centavos %= 10
print("%d moeda(s) de R$ 0.10" % quant)

quant = centavos // 5
centavos %= 5
print("%d moeda(s) de R$ 0.05" % quant)

quant = centavos // 1
centavos %= 1
print("%d moeda(s) de R$ 0.01" % quant)
