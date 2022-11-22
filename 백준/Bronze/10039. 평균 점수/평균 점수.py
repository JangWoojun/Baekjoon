count = 0
for i in range(5):
    t = int(input())
    if t < 40:
        t = 40

    count += t

print(count // 5)