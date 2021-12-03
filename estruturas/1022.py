def gcd(num1, num2):
    while num2:
        num1, num2 = num2, num1 % num2
    return num1

def simplify_fraction(n, d):
    num_gcd = gcd(n, d)
    return int(n / num_gcd), int(d / num_gcd)

def sum(n1, d1, n2, d2):
    return (n1*d2 + n2*d1), (d1*d2)

def subtraction(n1, d1, n2, d2):
    return (n1*d2 - n2*d1), (d1*d2)

def multiplication(n1, d1, n2, d2):
    return (n1*n2), (d1*d2)

def division(n1, d1, n2, d2):
    return (n1*d2), (n2*d1)

operations = {
    "+": sum,
    "-": subtraction,
    "*": multiplication,
    "/": division,
}

n = int(input())

for i in range(n):
    case = input().split()
    n1 = int(case[0])
    d1 = int(case[2])
    op = case[3]
    n2 = int(case[4])
    d2 = int(case[6])

    n, d = operations[op](n1, d1, n2, d2)
    n_simpl, d_simpl = simplify_fraction(n, d)
    print(f"{n}/{d} = {n_simpl}/{d_simpl}")
