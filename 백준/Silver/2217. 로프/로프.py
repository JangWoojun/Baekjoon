from sys import stdin
input = stdin.readline

n = int(input())
arr = sorted([int(input()) for _ in range(n)])

count = max(arr)

for i in range(n-1, -1, -1):
    a = arr[i]*(n-i)
    if count < a:
        count = a

print(count)