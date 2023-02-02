import sys
input = sys.stdin.readline

m = {}

for _ in range(int(input())):
    sum = input()
    if m.get(sum) == None:
        m[sum] = 1
    else:
        m[sum] +=1
        
a = (0, "a")

for i in m:
    if a[0] < m[i]:
        a = (m[i], i)
    elif a[0] == m[i] and a[1] > i:
        a = (m[i], i)

print(a[1])
    