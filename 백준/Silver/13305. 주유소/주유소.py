from sys import stdin
input = stdin.readline

n = int(input())

arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
arr2.pop()

count = 0

for i in range(n-1):
    if arr2[i] == min(arr2):
        a = 0
        for j in range(i, n-1):
            a+=arr1[j]
        count+=(a * arr2[i])
        break
    else:
        count+= arr2[i] * arr1[i]

print(count)