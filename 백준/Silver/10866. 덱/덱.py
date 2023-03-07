from collections import deque
from sys import stdin
input = stdin.readline

n = int(input())
q = deque()

for _ in range(n):
    a = input()
    if "push_front" in a:
        b = a.split()
        q.appendleft(b[-1])
    elif "push_back" in a:
        b = a.split()
        q.append(b[-1])
    elif "pop_front" in a:
        if q:
            print(q.popleft())
        else:
            print(-1)
    elif "pop_back" in a:
        if q:
            print(q.pop())
        else:
            print(-1)
    elif "size" in a:
        print(len(q))
    elif "empty" in a:
        if q:
            print(0)
        else:
            print(1)
    elif "front" in a:
        if q:
            print(q[0])
        else:
            print(-1)
    elif "back" in a:
        if q:
            print(q[-1])
        else:
            print(-1)