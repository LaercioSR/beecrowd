num = int(input())
i = 0
x = 1
y = 1
z = 1

while i != (num*2):
    print(x, y, z)

    i += 1
    if i % 2 == 0:
        x += 1
        y = x*x
        z = x*y
    else:
        y += 1
        z += 1
