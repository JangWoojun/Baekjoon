import sys
input = sys.stdin.readline

n = int(input())
arr1 = list(map(int, input().split()))

arr1.sort()
arr2 = []
t = 0
for i in range(n):
    if i == 0:
        arr2.append(arr1[i])
    else:
        arr2.append(arr2[i-1] + arr1[i])
for j in arr2:
    t+=j
print(t)