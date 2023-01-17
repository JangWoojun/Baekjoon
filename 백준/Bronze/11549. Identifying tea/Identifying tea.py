n = int(input())
a = list(map(int, input().split()))
count = 0
for i in a:
    if i == n:
        count += 1
print(count)