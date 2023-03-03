from sys import stdin
input = stdin.readline

n = int(input())
sum = int(input())
arr = [] 
count = 0

for _ in range(n - 1):
  arr.append(int(input()))
arr.sort(reverse = True)
if n == 1:
  print(0)
else:
  while arr[0] >= sum:
    sum += 1
    arr[0] -= 1
    count += 1
    arr.sort(reverse=True)
  print(count)