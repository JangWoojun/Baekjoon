from sys import stdin
input = stdin.readline

n, k = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]
arr.sort(key=lambda x : (-x[1], -x[2], -x[3]))

for i in range(n):
    if arr[i][0] == k:
        j = i
        
for l in range(n):
    if arr[j][1:] == arr[l][1:]:
        print(l+1)
        break