a = input()
b = 0
count = 0

while len(a) != 1:
    for i in a:
        b+=int(i)
    count+=1
    a = str(b)
    b = 0

if int(a) % 3 == 0:
    print(count)
    print("YES")
else:
    print(count)
    print("NO")