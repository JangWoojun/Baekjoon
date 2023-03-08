from collections import defaultdict
from sys import stdin
input = stdin.readline

dic = defaultdict(int)

n1 = int(input())

num1 = input().split()

for i in num1:
    dic[i]+=1

n2 = int(input())

num2 = input().split()

for j in num2:
    print(dic[j],end=" ")