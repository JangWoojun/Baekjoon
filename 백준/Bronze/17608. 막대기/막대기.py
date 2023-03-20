from sys import stdin
input = stdin.readline

arr = []
count = 1
for _ in range(int(input())):
    arr.append(int(input()))
big = arr[-1]
for i in range(len(arr) -2, -1, -1):
    if arr[i] > big:
        count+=1
        big = arr[i]
print(count)