import sys

n = int(sys.stdin.readline())

f = [i for i in range(n+1)]
f[1] = 1

for i in range(2, n+1) :
    f[i] = f[i-1] + f[i-2]
    
print(f[-1])