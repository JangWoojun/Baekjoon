n = input()
a = list(n)
b = sum([pow(int(num), 5) for num in a])

print(b)