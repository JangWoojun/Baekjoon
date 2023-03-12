from sys import stdin
input = stdin.readline

n = int(input())
ans = []

for _ in range(n):
    a, b = map(int, input().split())
    ans.append((b, a))

ans.sort()

for i in ans:
    print(f"{i[1]} {i[0]}")