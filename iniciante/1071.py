x = int(input())
y = int(input())

total = 0

for i in range(y+1, x):
    if i % 2 == 1:
        total += i

print(total)