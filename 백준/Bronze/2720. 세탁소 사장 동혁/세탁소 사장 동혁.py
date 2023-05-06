from sys import stdin
input = stdin.readline

n = int(input())
arr = [25, 10, 5, 1]

for _ in range(n):
    
	a = int(input())
	for i in arr:
		print(a//i, end=' ')
		a%=i
	print()