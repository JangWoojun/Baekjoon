from sys import stdin
input = stdin.readline

n = int(input())
arr = []


for i in range(n):
    a, b = map(str, input().split())
    a = int(a)
    c = (a, i, b)
    arr.append(c)
    
arr.sort()

for l in arr:
    print(f"{l[0]} {l[2]}")