from sys import stdin
input = stdin.readline

n = int(input())
count = 0
arr = [[0]*101 for _ in range(101)]

for _ in range(n):
    a, b = map(int, input().split())
    for i in range(a, a+10):
        for j in range(b, b+10):
            if arr[i][j] == 1:
                continue
            arr[i][j] = 1
            count += 1

print(count)