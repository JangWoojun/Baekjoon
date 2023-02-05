n, m = map(int, input().split())
list = []
ans = []

for _ in range(n):
    list.append(input())

for a in range(n-7):
    for b in range(m-7):
        index1 = 0
        index2 = 0
        for i in range(a, a+8):
            for j in range(b, b+8):
                if (i+j) % 2 == 0:
                    if list[i][j] != 'W':
                        index1 += 1
                    if list[i][j] != 'B':
                        index2 += 1
                else:
                    if list[i][j] != 'B':
                        index1 += 1
                    if list[i][j] != 'W':
                        index2 += 1
        ans.append(min(index1, index2))

print(min(ans))