a = input()
arr = [a[i:] for i in range(len(a))]

arr.sort()

for j in arr:
    print(j)