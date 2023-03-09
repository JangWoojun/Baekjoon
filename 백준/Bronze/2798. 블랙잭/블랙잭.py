from sys import stdin
from itertools import combinations
input = stdin.readline

a, b = map(int, input().split())
arr = []

for i in input().split():
    arr.append(int(i))
    
ans = 0

for j in combinations(arr, 3):
    c = sum(j)
    if ans < c <= b:
        ans = c

print(ans)
        
 