import sys
input = sys.stdin.readline

a = [int(input()) for _ in range(0, 9)]
num = sum(a)

a.sort()

def solved():
  for i in range(0, 9):
    for j in range(8, -1, -1):
      if (i == j):
        continue
      if (num - (a[i] + a[j]) == 100):
        b = [i, j]
        return b

b = solved()

for i in range(0, 9):
  if i == b[0] or i == b[1]:
    continue
  print(a[i])