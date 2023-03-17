from sys import stdin

input = stdin.readline

c = 0
d = 0

for _ in range(20):
    sum_input = input().split()
    a, b = sum_input[0], float(sum_input[1])
    
    if "A+" in sum_input[2]:
        c += b
        d += b * 4.5
    elif "A0" == sum_input[2]:
        c += b
        d += b * 4.0
    elif "B+" == sum_input[2]:
        c += b
        d += b * 3.5
    elif "B0" == sum_input[2]:
        c += b
        d += b * 3.0
    elif "C+" == sum_input[2]:
        c += b
        d += b * 2.5
    elif "C0" == sum_input[2]:
        c += b
        d += b * 2.0
    elif "D+" == sum_input[2]:
        c += b
        d += b * 1.5
    elif "D0" == sum_input[2]:
        c += b
        d += b * 1.0
    elif "F" == sum_input[2]:
        c += b
        d += b * 0.0
    else:
        continue
    
print(f"{d / c :.6f}")