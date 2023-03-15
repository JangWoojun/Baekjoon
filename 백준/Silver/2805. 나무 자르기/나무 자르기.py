from sys import stdin
from collections import deque
input = stdin.readline

a, b = map(int, input().split())
c = input().split()

arr = deque([int(_) for _ in c])

s = 1
e = sum(arr)

count = 0

while s<=e:
    m = (s+e)//2
    count = 0
    for i in arr:
        if i > m:
            count+=i-m
    if count >= b:
        s = m+1
    else:
        e = m-1
        
print(e)