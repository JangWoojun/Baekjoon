from sys import stdin
input = stdin.readline

n = int(input())
arr = sorted(list(set(map(int, input().split()))))

print(*arr)