from sys import stdin
input = stdin.readline

def something(n):
    if n == 0:
        return 1
    return n * something(n-1)

a, k = map(int, input().split())
print(something(a)//(something(k)*something(a-k)))