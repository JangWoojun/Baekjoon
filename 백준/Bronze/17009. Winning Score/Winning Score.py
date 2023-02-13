arr1 = [int(input()) for _ in range(3)]
arr2 = [int(input()) for _ in range(3)]
a = arr1[0]*3 + arr1[1]*2 + arr1[2]
b = arr2[0]*3 + arr2[1]*2 + arr2[2]
if a == b:
    print("T")
elif a > b:
    print("A")
else:
    print("B")