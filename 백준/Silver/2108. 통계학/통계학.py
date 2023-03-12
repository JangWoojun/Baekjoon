from sys import stdin
from collections import Counter
input = stdin.readline

n = int(input())

arr = []

for _ in range(n):
    a = int(input())
    arr.append(a)
    
arr.sort()
print(round(sum(arr) / len(arr)))
print(arr[len(arr) // 2])

count = Counter(arr).most_common(2)

if len(arr) > 1:
    if count[0][1] == count[1][1]:
        print(count[1][0])
    else:
        print(count[0][0])
else:
    print(count[0][0])
    
print(max(arr) - min(arr))