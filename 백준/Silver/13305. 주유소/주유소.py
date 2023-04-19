from sys import stdin
from collections import deque
input = stdin.readline

n = int(input())

arr1 = deque(map(int, input().split()))
arr2 = list(map(int, input().split()))
arr2.pop()

count = 0

for i in range(n-1):
    if arr2[i] == min(arr2):
        count+=(sum(arr1) * arr2[i])
        break
    else:
        count+= arr2[i] * arr1[i]
        arr1.popleft()

print(count)