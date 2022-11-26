n = int(input())
for i in range(n):
    a1 = 0 
    b1 = 0
    
    for j in range(9):
        a2, b2 = map(int, input().split())
        a1 += a2
        b1 += b2
    
    if a1 > b1:
        print('Yonsei')
    elif a1 < b1:
        print('Korea')
    else:
        print("Draw")