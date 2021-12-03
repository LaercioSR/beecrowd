# -*- coding: utf-8 -*-
eixoX, eixoY = input().split(' ')
eixoX = float(eixoX)
eixoY = float(eixoY)

if eixoX == 0 and eixoY == 0:
    print("Origem")
elif eixoX == 0 and eixoY != 0:
    print("Eixo Y")
elif eixoX != 0 and eixoY == 0:
    print("Eixo X")
elif eixoX > 0 and eixoY > 0:
    print("Q1")
elif eixoX < 0 and eixoY > 0:
    print("Q2")
elif eixoX < 0 and eixoY < 0:
    print("Q3")
elif eixoX > 0 and eixoY < 0:
    print("Q4")
