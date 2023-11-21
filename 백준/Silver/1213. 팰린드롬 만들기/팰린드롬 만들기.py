# import sys
# input = sys.stdin.readline

atoz = [(chr(i).upper(), 0) for i in range(97, 123)]

for j in input():
    for l in range(len(atoz)):
        if j == atoz[l][0]:
            atoz[l] = (atoz[l][0], atoz[l][1]+1)
            
chk = 0
ans = ""
for i in atoz:
    if i[1] % 2 != 0:
        chk+=1

atoz.reverse()

if chk > 1:
    print("I'm Sorry Hansoo")
else:
    for i in atoz:
        if i[1] > 1:
            num = i[1]
            for _ in range(0, i[1], 2):
                if num == 1:
                    ans = f"{ans[0:len(ans)//2]}{i[0]}{ans[len(ans)//2:]}"
                else:
                    ans = f"{i[0]}{ans}{i[0]}"
                    num-=2
        elif i[1] == 1:
            ans = f"{ans[0:len(ans)//2]}{i[0]}{ans[len(ans)//2:]}"

    print(ans)