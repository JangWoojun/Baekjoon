n = int(input())
arr = []

for i in range(n):
    a = input()
    b = (len(a), a)
    arr.append(b)
arr = list(set(arr))
arr.sort()

for j in arr:
    print(j[1])