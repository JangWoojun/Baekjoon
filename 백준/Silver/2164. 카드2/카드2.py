from collections import deque

q = deque()

n = int(input())

for i in range(1, n+1):
    q.append(i)
    
while len(q) != 1:
    q.popleft()
    value = q[0]
    q.popleft()
    q.append(value)

print(q[0])