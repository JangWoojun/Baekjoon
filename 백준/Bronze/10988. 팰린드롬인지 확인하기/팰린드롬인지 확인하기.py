n = input()
chk = True
s = 0
e = len(n) - 1

for _ in range(len(n)//2):
    if n[s] != n[e]:
        chk = False
    s+=1
    e-=1

print(1 if chk else 0)