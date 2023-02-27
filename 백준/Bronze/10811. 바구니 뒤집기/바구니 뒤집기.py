from sys import stdin
input = stdin.readline

n, m = map(int, input().split())

arr = [i for i in range(1, n+1)]

for _ in range(m):
    i, j = map(int, input().split())
    some_arr = arr[i-1:j]
    some_arr.reverse()
    arr[i-1:j] = some_arr
print(*arr)