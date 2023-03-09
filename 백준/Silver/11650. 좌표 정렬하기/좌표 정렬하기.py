from sys import stdin
input = stdin.readline

n = int(input())

arr = []

for _ in range(n):
    a, b = map(int, input().split())
    c = (a,b)
    arr.append(c)
    
arr.sort()

for i in range(n):
    print(arr[i][0],arr[i][1])