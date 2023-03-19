from sys import stdin
input = stdin.readline

n = int(input())

for _ in range(n) :
  a, b = map(int, input().split())
  c = b*2 - a
  n = a - b
  print(c, n)