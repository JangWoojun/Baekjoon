n = int(input())
m = list(str(input()))

a = b = 0
for v in m:
    if v == 'A':
        a += 1
    else:
        b += 1

if a > b:
    print("A")
elif a == b:
    print("Tie")
else:
    print("B")