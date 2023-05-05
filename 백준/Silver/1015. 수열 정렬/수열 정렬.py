from sys import stdin
input = stdin.readline

n = int(input())
arr = list(map(int, input().split()))

max_num = max(arr)
index_arr = [[] for _ in range(max_num + 1)]

for i in range(n):
    index_arr[arr[i]].append(i)

arr2 = [0] * n
next_idx = 0

for j in range(max_num + 1):
    for l in index_arr[j]:
        arr2[l] = next_idx
        next_idx += 1

print(*arr2)
