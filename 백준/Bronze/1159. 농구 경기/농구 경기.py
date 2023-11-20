import sys
input = sys.stdin.readline

n = int(input())
arr = [input() for _ in range(n)]

atoz = [chr(i) for i in range(97, 123)]
numarr = [0 for _ in range(26)]

for j in arr:
    for l in range(26):
        if j[0] == atoz[l]:
            numarr[l]+=1

chk = False

for t in range(26):
    if numarr[t] >= 5:
        print(atoz[t], end="")
        chk = True

if chk != True:
    print("PREDAJA")

