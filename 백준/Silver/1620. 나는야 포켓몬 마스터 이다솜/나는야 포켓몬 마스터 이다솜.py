import sys
input = sys.stdin.readline

n, m = map(int, input().split())
name_arr = [""]
num_map = dict()

for i in range(1, n+1):
    a = input()
    name_arr.append(a)
    num_map[a] = i

for _ in range(m):
    b = input()
    try:
        print(name_arr[int(b)][0:len(name_arr[int(b)])-1])
    except:
        print(num_map[b])

