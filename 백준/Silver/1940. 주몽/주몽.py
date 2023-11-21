import sys
input = sys.stdin.readline

n = int(input())
m = int(input())
num = list(map(int, input().split()))
ans = 0

for i in range(len(num)):
    for j in range(i+1, len(num)):
        if m == num[i] + num[j]:
            ans+=1

print(ans)