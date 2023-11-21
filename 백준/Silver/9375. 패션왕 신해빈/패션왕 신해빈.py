import sys
input = sys.stdin.readline

for _ in range(int(input())):
    m = dict()
    for _ in range(int(input())):
        a, b = map(str, input().split())
        try:
            m[b]+=1
        except:
            m[b]=1
    
    ans = 1
    for i in m.values():
        ans *= (i+1)
    
    print(ans-1)
        
