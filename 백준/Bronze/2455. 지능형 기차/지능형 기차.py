import sys
input = sys.stdin.readline

count = 0
arr = []

for _ in range(4):
    a, b = map(int, input().split())
    count += b
    count -= a
    arr.append(count)

print(max(arr))