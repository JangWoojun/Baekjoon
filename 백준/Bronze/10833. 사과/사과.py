count = 0
for _ in range(int(input())):
    a, b = map(int, input().split())
    count += b%a
print(count)