from sys import stdin
from collections import deque
input = stdin.readline

n = int(input())

for _ in range(n):
    a, b = map(int, input().split())
    dq = deque()
    
    arr = input().split()
    
    for num in range(len(arr)):
        arr[num] = (arr[num], num)
    
    for i in arr:
        if i[1] == b:
            dq.append((int(i[0]), True))
        else:
            dq.append((int(i[0]), False))
    if a == 1:
        print(1)
        continue
    
    j = 0
        
    while True:
        chk = True
        for l in dq:
            if dq[0] == l:
                continue
            if dq[0][0] < l[0]:
                chk = False
        if chk:
            if dq[0][1] == True:
                print(j+1)
                break
            dq.popleft()
            j+=1
        else:
            dq.append(dq.popleft())