import sys
input = sys.stdin.readline

s = []

for _ in range(int(input())):
    sum = input()
    if sum == "top\n":
        if s:
            print(s[-1])
        else:
            print(-1)
    elif sum == "size\n":
        print(len(s))
    elif sum == "empty\n":
        if s:
            print(0)
        else:
            print(1)
    elif sum == "pop\n":
        if s:
            print(s.pop())
        else:
            print(-1)
    else:
        s.append(sum[5:-1])