import sys
input = sys.stdin.readline

a, b, c = map(int, input().split())

count = 0

time = [0 for _ in range(0, 101)]

for _ in range(3):
  start, end = map(int, input().split())
  for i in range(start, end):
    time[i]+=1

for j in time:
  if j == 3:
    count+=c*3
  elif j == 2:
    count+=b*2
  elif j == 1:
    count+=a

print(count)