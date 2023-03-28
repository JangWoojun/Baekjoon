import sys
input = sys.stdin.readline

n = int(input())
arr = set()

for _ in range(n):
    a = input().split()
    
    if len(a) == 1:
        if "all" == a[0]:
            arr = set([i for i in range(1, 21)])
        else:
            arr = set()
    
    else:
        if "add" == a[0]:
            arr.add(int(a[1]))
        elif "remove" == a[0]:
            arr.discard(int(a[1]))
        elif "check" == a[0]:
            if int(a[1]) in arr:
                print(1)
            else:
                print(0)
        else:
            if int(a[1]) in arr:
                arr.discard(int(a[1]))
            else:
                arr.add(int(a[1]))