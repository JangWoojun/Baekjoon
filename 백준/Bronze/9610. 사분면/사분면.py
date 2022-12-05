n = int(input())
a = b = c = d = f = 0

for _ in range(n):
    x, y = map(int, input().split())
    if x == 0 or y == 0:
        f += 1
    elif x > 0 and y > 0:
        a += 1
    elif x < 0 and y > 0:
        b += 1
    elif x < 0 and y < 0:
        c += 1
    elif x > 0 and y < 0:
        d += 1

print("Q1: %d" %(a))
print("Q2: %d" %(b))
print("Q3: %d" %(c))
print("Q4: %d" %(d))
print("AXIS: %d" %(f))