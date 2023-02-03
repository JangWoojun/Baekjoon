import sys
input = sys.stdin.readline

count = 0
n, k = map(int, input().split())
a = [int(input()) for _ in range(n)]
a.reverse()

i = 0

while k!=0:
    if k - a[i] < 0:
        i+=1
    else:
        k-=a[i]
        count+=1

print(count)
    
