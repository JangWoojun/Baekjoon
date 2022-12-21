while True:
    a = input()
    n = 0
    if a == '#':
        break
    for b in a:
        if b in "AEIOUaeiou":
            n += 1
    print(n)