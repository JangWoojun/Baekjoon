from sys import stdin
input = stdin.readline

n, m = map(int, input().split())
a = [0 for _ in range(n)]

for _ in range(m):
    i, j, k = map(int, input().split())
    for b in range(i-1, j):
        a[b] = k

for i in range(n):
    print(a[i],end=" ")

