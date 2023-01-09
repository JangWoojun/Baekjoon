n = int(input())
for _ in range(n):
    a, b = input().split()
    b = int(b)
    if b >= 97: 
        score = "A+"
    elif b >= 90: 
        score = "A"
    elif b >= 87: 
        score = "B+"
    elif b >= 80: 
        score = "B"
    elif b >= 77: 
        score = "C+"
    elif b >= 70: 
        score = "C"
    elif b >= 67: 
        score = "D+"
    elif b >= 60: 
        score = "D"
    else: 
        score = "F"
    print(a, score)