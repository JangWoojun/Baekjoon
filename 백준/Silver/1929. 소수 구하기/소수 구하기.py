import sys
from math import sqrt
input = sys.stdin.readline

a, b = map(int,input().split())
chk = [True for _ in range(b + 1)]

for i in range(2, int(sqrt(b)) + 1): 
    if chk[i] == True: 
        j = 2 
        while i * j <= b:
            chk[i * j] = False
            j += 1

for i in range(a, b + 1):
    if chk[i]:
        if i != 1:
            print(i)