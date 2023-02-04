import sys
input = sys.stdin.readline

count = 0
n, l = map(int, input().split())
a = [False] * 1001
for i in map(int, input().split()):
    a[i] = True

x = 0

while x < 1001:
    if a[x]:
        count+=1
        x+=l
    else:
        x+=1
print(count)
