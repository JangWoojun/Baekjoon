from sys import stdin
input = stdin.readline

while True:
    a, b, c = map(int, input().split())
    if a == 0 and b == 0 and c == 0:
        break
    
    arr = [a, b, c]
    arr.sort()
    
    a = arr[0]
    b = arr[1]
    c = arr[-1]
    
    if (a*a) + (b*b) == (c*c):
        print("right")
    else:
        print("wrong")