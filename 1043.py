a, b, c = input().split(' ')
a = float(a)
b = float(b)
c = float(c)

if ((b - c) < a and a < (b + c)) and ((a - c) < b and b < (a + c)) and ((a - b) < c and a < (a + b)):
    perimetro = a + b + c
    print("Perimetro =", perimetro)
else:
    area = ((a + b)/2) * c
