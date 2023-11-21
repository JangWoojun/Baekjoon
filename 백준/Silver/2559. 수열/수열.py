import sys
input = sys.stdin.readline

m, n = map(int, input().split())
arr = list(map(int, input().split()))

max = sum(arr[0: n])
var = max

for i in range(m):
    if n+i > len(arr)-1:
        break
    var = var -arr[i]+arr[n+i]
    if var > max:
        max = var

print(max)