a = list(map(str, input().rstrip("\n")))
arr = []

for i in range(1, len(a) - 1):
    for j in range(i + 1, len(a)):
        b1 = a[:i]
        b2 = a[i:j]
        b3 = a[j:]

        b1.reverse()
        b2.reverse()
        b3.reverse()

        arr.append("".join(b1 + b2 + b3))
        
print(min(arr))