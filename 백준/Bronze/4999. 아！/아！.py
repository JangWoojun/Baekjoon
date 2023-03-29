from sys import stdin
input = stdin.readline

a = input()
b = input()

if len(a) >= len(b):
    print("go")
else:
    print("no")