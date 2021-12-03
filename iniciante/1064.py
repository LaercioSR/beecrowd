total_positive = 0
count_positive = 0

for i in range(6):
    number = float(input())
    if number > 0:
        total_positive += number
        count_positive += 1

avg_positive = round(total_positive / count_positive, 1)

print(count_positive, "valores positivos")
print(avg_positive)