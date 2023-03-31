from sys import stdin
input = stdin.readline
 
a, b = map(int, input().split())
c = sorted(list(map(int, input().split())))
print(c[a-b])