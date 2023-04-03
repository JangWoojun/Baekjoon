from sys import stdin
input = stdin.readline

a, b = map(int, input().split())

m = dict()

for i in range(a):
    c = input().split()
    m[c[0]] = c[1]
    
for _ in range(b):
    d = input().split("\n")
    print(m[d[0]])