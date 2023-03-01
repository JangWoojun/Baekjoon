while True:
    a = input()
    if a == "0":
        break
    b = len(a)+1
    
    for i in a:
        if i == "0":
            b += 4 
        elif i == "1":
            b += 2
        else:
            b += 3
    print(b)