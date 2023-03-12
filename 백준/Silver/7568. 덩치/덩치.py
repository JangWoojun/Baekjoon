from sys import stdin
input = stdin.readline

n = int(input())

arr = [] 
ans = [1 for _ in range(n)]

for _ in range(n):
    a, b = map(int, input().split())
    arr.append((a, b))
    
for j in range(n):
    for l in range(n):
        if arr[j][0] > arr[l][0] and arr[j][1] > arr[l][1]:
            ans[l]+=1
        
print(*ans)