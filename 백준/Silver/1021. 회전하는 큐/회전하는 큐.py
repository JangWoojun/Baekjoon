from sys import stdin
from collections import deque
input = stdin.readline

n, m = map(int, input().split())
dq = deque([i for i in range(1, n+1)])
arr = deque(map(int, input().split()))

count = 0 
for i in arr:  
    while True:     
        if dq[0] == i: 
            dq.popleft()
            break
        else:
            if dq.index(i) < len(dq)/2:  
                while dq[0] != i:   
                    dq.append(dq.popleft())  
                    count += 1
            else:
                while dq[0] != i:
                    dq.appendleft(dq.pop())  
                    count += 1
print(count)