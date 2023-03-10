from sys import stdin
input = stdin.readline

x, y, w, h = map(int, input().split())

ans_x = 10000
ans_y = 10000

if w - x < ans_x:
    ans_x = w - x
    
if x < ans_x:
    ans_x = x

if h - y < ans_y:
    ans_y = h - y
    
if y < ans_y:
    ans_y = y
    
if ans_x > ans_y:
    print(ans_y)
else:
    print(ans_x)