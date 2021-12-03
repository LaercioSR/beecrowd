

entradas = [
    '3',
    '3 22',
    '2 11',
    '3 39',
    '5',
    '1 25',
    '2 20',
    '3 31',
    '2 40',
    '6 70',
    '2',
    '1 1',
    '3 2',
    '0'
]

pos = -1
def input():
    global pos
    pos += 1
    return entradas[pos]

num_city = 0
n = int(input())
while n != 0:
    if n == 0:
        break
    
    num_city += 1
    if num_city != 1:
        print()
    total_residents = 0
    total_consumption = 0
    list_consumption = {}
    for i in range(n):
        residents, consumption = map(int, input().split(' '))

        avg_consumption = consumption // residents
        if (avg_consumption in list_consumption.keys()):
            list_consumption[avg_consumption] += residents
        else:
            list_consumption[avg_consumption] = residents

        total_residents += residents
        total_consumption += consumption

    list_sorted = sorted(list_consumption)
    result = ""
    for x in list_sorted:
        result += str(list_consumption[x]) + "-" + str(x) + " "

    print("Cidade# "+str(num_city)+":")
    print(result[:-1])
    print("Consumo medio: %0.2f m3." % (int((total_consumption / total_residents) * 100)/100.0))
    
    n = int(input())