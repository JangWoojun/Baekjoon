from sys import stdin
from collections import defaultdict
input = stdin.readline

dic = defaultdict(bool)
_ = int(input())

a = input().split()

for i in a:
    dic[i] = True

_ = int(input())

a = input().split()

for j in a:
    if dic[j]:
        print(1)
    else:
        print(0)