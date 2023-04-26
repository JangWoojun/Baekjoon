from sys import stdin
input = stdin.readline

n = int(input())
ans = []

for i in range(1, n+1):
    arr = [n]
    arr.append(i)
    j = 1
    
    while True:
        num = arr[j-1] - arr[j]
        if num < 0:
            break
        arr.append(num)
        j+=1

    if len(ans) < len(arr):
        ans = arr

print(len(ans))
print(*ans)