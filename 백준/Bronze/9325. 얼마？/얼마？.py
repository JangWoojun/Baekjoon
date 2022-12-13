n = int(input())

for _ in range(n):
    s = int(input())
    n = int(input())
    a = s
    for _ in range(n):
        q, p = map(int, input().split())
        a += q * p
        
    print(a)