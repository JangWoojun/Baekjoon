import sys
input = sys.stdin.readline

a, b = map(int, input().split())

if (0 <= a < 12) or (16 < a <= 23) or b == 1:
    count = 280
else:
    count = 320
    
print(count)