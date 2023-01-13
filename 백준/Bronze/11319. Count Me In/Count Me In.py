sum = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']
n = int(input())
for _ in range(n):
    a = input()
    b = c = 0
    for i in a:
        if i in sum:
            c += 1
        elif i.isalpha():
             b += 1
    print(b, c)