from sys import stdin
input = stdin.readline

n = int(input())
count = 0
for i in range(1, n):
    for j in range(i, n):
        a = n-(i+j)
        if a < j:
            break
        if i+j > a:
            count+=1
print(count)