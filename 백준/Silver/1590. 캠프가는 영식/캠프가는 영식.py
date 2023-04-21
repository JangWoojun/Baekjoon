from sys import stdin
input = stdin.readline

n, t = map(int, input().split())

arr1 = []
ans = float('inf')

for _ in range(n):
    a, b, c = map(int, input().split())
    arr2 = [a + b * i for i in range(c)]
    arr1.append(arr2)
    
    for i in arr2:
        if i >= t:
            ans = min(ans, i - t)

if ans == float('inf'):
    print(-1)
else:
    print(ans)
