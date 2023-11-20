s = input()

for i in s:
    if ord(i) > 64 and ord(i) < 91:
        if ord(i) > 77:
            print(chr(ord(i)-13), end="")
        else:
            print(chr(ord(i)+13), end="")
    elif ord(i) > 96 and ord(i) < 123:
        if ord(i) > 109:
            print(chr(ord(i)-13), end="")
        else:
            print(chr(ord(i)+13), end="")
    else:
        print(i, end="")