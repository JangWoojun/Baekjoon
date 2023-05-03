from sys import stdin
input = stdin.readline

n = int(input())
ans = []

for i in range(n):
    arr = list(map(int, input().split()))
    max_num = 0
    for j in range(5):
        for k in range(j + 1, 5):
            for l in range(k + 1, 5):
                num = (arr[j] + arr[k] + arr[l]) % 10
                if num >= max_num:
                    max_num = num
    ans.append((max_num, i+1))

ans = sorted(ans, key=lambda x: (-x[0], -x[1]))
print(ans[0][1])
