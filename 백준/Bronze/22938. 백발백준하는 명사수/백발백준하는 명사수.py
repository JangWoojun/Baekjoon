import sys
input = sys.stdin.readline

a1, b1, c1 = map(int, input().split())
a2, b2, c2 = map(int, input().split())
d = (a1-a2)**2+(b1-b2)**2
if (c1+c2)**2>d:
    print("YES")
else:
    print("NO")