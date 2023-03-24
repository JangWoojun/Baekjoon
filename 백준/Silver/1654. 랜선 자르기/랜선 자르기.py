from sys import stdin
input = stdin.readline

a, b = map(int, input().split())
arr = [int(input()) for _ in range(a)]

s = 1
e = max(arr)

while s<=e:
    count = 0
    m = (s+e)//2
    for i in arr:
        count+=i // m
    if count >= b:
        s = m+1
    else:
        e = m-1

print(e)
