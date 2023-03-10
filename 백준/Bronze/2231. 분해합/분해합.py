from sys import stdin
input = stdin.readline

n = int(input())
ans = 10000000

for i in range(1, n+1):
    sum = i
    for j in str(i):
        sum += int(j)
    if sum == n and ans > sum:
        ans = i
              
if ans == 10000000:
    print(0)
else:
    print(ans)