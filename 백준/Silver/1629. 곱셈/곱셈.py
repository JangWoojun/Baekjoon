import sys
sys.stdin.readline

a, b, c = map(int, input().split())

def some(a, b):
    if b == 1:
        return a %c
    d = some(a, b // 2) % c
    d = d * d
    
    if b % 2 == 1:
        d*=a
    return d % c

print(some(a, b))