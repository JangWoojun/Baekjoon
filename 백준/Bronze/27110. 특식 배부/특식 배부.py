n = int(input())
a = list(map(int, input().split()))
b = 0

for i in range(3) :
    if a[i] <= n :
        b += a[i]
    else :
        b += n

print(b)