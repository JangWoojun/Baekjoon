import sys
input = sys.stdin.readline

a = int(input())
count = 0
b = 1

while a != 0:
    a-=b
    count += 1
    b+=1
    if b > a:
        b = 1
print(count)