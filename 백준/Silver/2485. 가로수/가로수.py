from sys import stdin
from math import gcd
input = stdin.readline

count = 0
arr = []

n = int(input())
a = int(input())

for _ in range(n-1):
    b = int(input())
    arr.append(b - a)
    a = b

chk = arr[0]
for i in range(1, len(arr)):
    chk = gcd(chk, arr[i])

for j in arr:
    count+=j // chk-1
    
print(count)