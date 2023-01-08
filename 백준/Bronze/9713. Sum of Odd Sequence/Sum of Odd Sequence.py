n = int(input())
for _ in range(n):
    a = int(input())
    print(sum([b for b in range(1, a+1) if b%2]))