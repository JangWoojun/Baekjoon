from sys import stdin
input = stdin.readline

n = int(input())

count = 2 ** n + 1 

print(count ** 2)
