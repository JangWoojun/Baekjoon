from sys import stdin
input = stdin.readline

n = int(input())

a = list(map(int, input().split()))
b = list(map(int, input().split()))

count = 0

if sum(a) > sum(b):
    for i in range(n):
       count+= max(a) * min(b)
       a.remove(max(a))
       b.remove(min(b))
else:
    for i in range(n):
       count+= min(a) * max(b)
       b.remove(max(b))
       a.remove(min(a))
       
print(count)