a = []
for _ in range(6) :
    a.append(input())
b = a.count('W')
if b >= 5:
    print(1)
elif b >= 3:
    print(2)
elif b >= 1:
    print(3)
else:
    print(-1)