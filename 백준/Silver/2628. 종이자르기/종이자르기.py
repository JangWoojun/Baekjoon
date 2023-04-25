from sys import stdin
input = stdin.readline

w,h = map(int, input().split())
n = int(input())

arr1 = [0, w]
arr2 = [0, h]
 
for _ in range(n):
    a, b = map(int, input().split())
    if a == 0:
        arr2.append(b)
    else:
        arr1.append(b)
 
arr1.sort()
arr2.sort()
 
ans = 0
 
for i in range(len(arr1)-1):
    for j in range(len(arr2)-1):
        x = arr1[i+1] - arr1[i]
        y = arr2[j+1] - arr2[j]
        ans = max(ans, x*y)
 
print(ans)