a, b = map(int, input().split())
ans = 0

for i in range(1, a + 1):
    if a%i == 0: 
        b-=1
        if b == 0:
            ans = i
            break
print(ans)