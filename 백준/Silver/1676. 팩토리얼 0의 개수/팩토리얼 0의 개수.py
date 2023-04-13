from sys import stdin
input = stdin.readline

n = int(input())
num = 1
count = 0

for i in range(1, n+1):
    num*=i
    
for i in reversed(str(num)):
    if i == "0":
        count+=1
    else:
        break

print(count)