# import sys
# input = sys.stdin.readline

n = int(input())

chk = input().split("*")

for _ in range(n):
    a = input()
    if a[0: len(chk[0])] == chk[0] and a[-len(chk[1]):] == chk[1] and len(chk[0])+len(chk[1]) <= len(a):
        print("DA")
    else:
        print("NE")
    