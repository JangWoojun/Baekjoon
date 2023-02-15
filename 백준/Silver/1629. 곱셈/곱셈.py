import sys
input = sys.stdin.readline

a, b, c = map(int, input().split())

def something(a, b):
    if b == 1:
        return a % c
    d = something(a, b // 2)
    d = (d * d) % c
    if b % 2 == 1:
        d = (d * a) % c
    return d

print(something(a, b))