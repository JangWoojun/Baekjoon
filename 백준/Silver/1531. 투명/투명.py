from sys import stdin
input = stdin.readline

n, m = map(int, input().split())
arr = [[0]*100 for _ in range(100)]
count = 0

for _ in range(n):
    a1, b1, a2, b2 = map(int, input().split())
    
    for i in range(a1, a2+1):
        for j in range(b1, b2+1):
            arr[i-1][j-1] += 1
            
for l in range(100):
    for k in range(100):
        if arr[l][k] > m:
            count += 1
            
print(count)