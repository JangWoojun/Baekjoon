sum = [1, 2, 3]
for _ in range(int(input())):
    a, b = map(int, input().split())
    a1 = sum.index(a)
    b1 = sum.index(b)
    sum[a1], sum[b1] = sum[b1], sum[a1]
print(sum[0])