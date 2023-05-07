from sys import stdin
input = stdin.readline

arr = [[False]*101 for _ in range(101)]

for _ in range(4):
    a1, b1, a2, b2 = map(int, input().split())
    
    for i in range(a1, a2):
        for j in range(b1, b2):
            arr[i][j] = True
            
count = 0

for l in range(101):
    for k in range(101):
        if arr[l][k]:
            count += 1

print(count)