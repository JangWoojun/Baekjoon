n = int(input())
for i in range(n):
    a = int(input())
    max = 0
    min = ""
    for j in range(a):
        name, num = input().split()
        num = int(num)
        if(num > max):
            max = num
            min = name
    print(min)