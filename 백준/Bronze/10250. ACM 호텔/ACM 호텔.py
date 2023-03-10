from sys import stdin
input = stdin.readline

for _ in range(int(input())):
    a, b, c = map(int, input().split())
    
    x = (c // a) + 1
    y = c % a
    
    if y == 0:
        y = a
        x -= 1
    
    print(y*100+x)