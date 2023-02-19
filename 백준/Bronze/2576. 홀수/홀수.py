import sys
input = sys.stdin.readline

arr = []
ans = 0

for _ in range(7):
    i = int(input())
    if i % 2 != 0:
        ans+=i
        arr.append(i)
if ans !=0:
    print(ans)
    print(min(arr))
else:
    print(-1)