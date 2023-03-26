import sys
input = sys.stdin.readline

n = int(input())
arr1 = list(map(int, input().split()))
arr1.sort()

m = int(input())
arr2 = list(map(int, input().split()))

for i in arr2:
    s = 0
    e = n-1
    chk = False
    while s <= e:
        m = (s+e)//2
        
        if arr1[m] == i:
            chk = True
            break
        elif arr1[m] > i:
            e = m-1
        else:
            s = m+1
    if chk:
        print(1, end=" ")
    else:
        print(0, end=" ")
        