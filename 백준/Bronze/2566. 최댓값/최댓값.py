from sys import stdin
input = stdin.readline

arr = [list(map(int, input().split())) for _ in range(9)]

a = 0
b = 0
max = -10000000

for i in range(9):
    for j in range( 9):
        if arr[i][j] > max:
            max = arr[i][j]
            a = i+1
            b = j+1

print(max)
print(a, b)