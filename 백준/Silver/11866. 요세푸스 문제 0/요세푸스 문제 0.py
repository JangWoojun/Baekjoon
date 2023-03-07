from collections import deque
from sys import stdin

input = stdin.readline

q = deque()
ans = []

n, k = map(int, input().split())

for i in range(1, n+1):
    q.append(i)

while q:
    for _ in range(k-1):
        q.append(q.popleft())
    ans.append(q.popleft())

print("<",end="")
for j in range(len(ans)-1):
     print(f"{ans[j]},",end=" ")
print(f"{ans[-1]}", end="")
print(">")