import sys
input = sys.stdin.readline

a, b, c = map(int, input().split())

arr = [list(map(int, input().split())) for _ in range(a)]
chk1 = sys.maxsize
chk2 = 0
for i in range(257):
    st = 0
    re = 0

    for j in range(a):
        for l in range(b):
            if arr[j][l] >= i:
                re+=arr[j][l] - i
            else:
                st+=i-arr[j][l]
            
    if re+c < st:
        continue
    
    if chk1 >= re*2 + st:
        chk1 = re*2 + st
        chk2 = i
        
print(chk1, chk2)