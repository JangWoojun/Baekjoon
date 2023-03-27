import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
arr = deque([int(input()) for i in range(n)])
chk_arr1 = list(arr)

ans = []
chk_arr2 = []
chk_arr3 = []

j = 1

for _ in range(n*2):
    if ans:
        if ans[-1] == arr[0]:
            chk_arr2.append(ans.pop())
            arr.popleft()
            chk_arr3.append("-")
        else:
            ans.append(j)
            j+=1
            chk_arr3.append("+")
    else:
        ans.append(j)
        j+=1
        chk_arr3.append("+")

        
if chk_arr1 == chk_arr2:
    for l in chk_arr3:
        print(l)
else:
    print("NO")
        
