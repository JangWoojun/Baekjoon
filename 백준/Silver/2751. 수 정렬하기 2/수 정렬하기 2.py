from sys import stdin
from collections import deque
input = stdin.readline

q = deque()

n = int(input())

for _ in range(n):
    a = int(input())
    q.append(a)
    
q = sorted(q)

for i in q:
    print(i)