import sys
input = sys.stdin.readline

count = 0
n, k = map(int, input().split())
a = [int(input()) for _ in range(n)]
a.reverse()

for i in a:
    count += k//i
    k%=i
    
print(count)