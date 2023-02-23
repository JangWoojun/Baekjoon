import sys
input = sys.stdin.readline

arr = []
for _ in range(int(input())):
    arr.append(int(input()))
    
ans = arr[-1]
if arr[2]-arr[1] == arr[1]-arr[0]:
    ans += (arr[1]-arr[0])
elif arr[2]//arr[1] == arr[1]//arr[0]:
    ans *= (arr[1]//arr[0])

print(ans)