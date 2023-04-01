a, b = map(int, input().split())

a_set = set([input() for _ in range(a)])
b_set = set([input() for _ in range(b)])

ans = sorted(list(a_set & b_set))
print(len(ans))

for i in ans:
    print(i)