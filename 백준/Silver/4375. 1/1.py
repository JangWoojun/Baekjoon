# import sys
# input = sys.stdin.readline

while True:
    try:
        a = int(input())
    except:
        break
    one = 1
    while True:
        if one % a == 0:
            print(len(str(one)))
            break
        else:
            one = one*10+1
