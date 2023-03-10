from sys import stdin
input = stdin.readline

n = int(input())

for _ in range(n):  
    a = int(input())
    b = int(input())
    
    f0 = [x for x in range(1, b+1)]
    for k in range(a): 
        for i in range(1, b): 
            f0[i] += f0[i-1]  
    print(f0[-1])