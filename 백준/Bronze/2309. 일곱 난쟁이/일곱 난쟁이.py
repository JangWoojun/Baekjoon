import sys
from itertools import combinations
input = sys.stdin.readline

a = []
ans = []

for _ in range(9):
    a.append(int(input()))
    
for i in combinations(a, 7):
    if i[0] + i[1] + i[2] + i[3] + i[4] + i[5] + i[6] == 100:
        for j in range(7):
            ans.append(i[j])
        break

ans.sort()

for l in ans:
    print(l)