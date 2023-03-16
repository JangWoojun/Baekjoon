from sys import stdin

input = stdin.readline

n, m = map(int, input().split())

arr = [i for i in range(1, n+1)]
for _ in range(m):
    i, j, k = map(int, input().split())
    arr[i-1:j] = arr[k-1:j] + arr[i-1:k-1]
print(*arr)