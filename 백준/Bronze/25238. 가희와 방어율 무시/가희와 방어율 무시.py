a, b = map(int, input().split())

num = a - a * b / 100
sum = 0
    
if num < 100:
    sum = 1

print(sum)