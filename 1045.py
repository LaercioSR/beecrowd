a, b, c = input().split(' ')
a = float(a)
b = float(b)
c = float(c)
lados = [a, b, c]
lados.sort()
c, b, a = lados

if a >= (b + c):
    print("NAO FORMA TRIANGULO")
else:
    if a*a == (b*b + c*c):
        print("TRIANGULO RETANGULO")
    elif a*a > (b*b + c*c):
        print("TRIANGULO OBTUSANGULO")
    elif a*a < (b*b + c*c):
        print("TRIANGULO ACUTANGULO")

    if a == b and a == c:
        print("TRIANGULO EQUILATERO")
    elif (a == b) or (b == c) or (a == c):
        print("TRIANGULO ISOSCELES")
