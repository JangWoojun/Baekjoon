n = int(input())

for i in range(n) :
    a = list(map(str,input().split()))
    b = float(a[0])
    for y in range(len(a)) : 
        if a[y] == '@' :
            b *= 3
        elif a[y] == '%' :
            b += 5
        elif a[y] == '#' :
            b -= 7
    print("%0.2f" % b)