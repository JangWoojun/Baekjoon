from sys import stdin
from collections import deque
input = stdin.readline

n, k = map(int, input().split())
q = deque([i for i in range(1, n+1)])
arr = []

count = 1

while q:
    for _ in range(k - 1):
        q.append(q.popleft())
    arr.append(q.popleft())


print("<",end="")
for j in range(len(arr) - 1):
    print(f"{arr[j]},", end=" ")
print(f"{arr[-1]}>")