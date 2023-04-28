from sys import stdin
input = stdin.readline

a = int(input())

ans = (5*a) - 400
print(ans)

if ans < 100:
    print(1)
elif ans == 100:
    print(0)
else:
    print(-1)