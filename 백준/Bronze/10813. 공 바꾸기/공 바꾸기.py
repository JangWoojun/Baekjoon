from sys import stdin
input = stdin.readline

n, m = map(int, input().split())
arr = [i for i in range(1, n+1)]

for i in range(m):
    a, b = map(int, input().split())
    c = arr[b-1]
    arr[b-1] = arr[a-1]
    arr[a-1] = c
print(*arr)