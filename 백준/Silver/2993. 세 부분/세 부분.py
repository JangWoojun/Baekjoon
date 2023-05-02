import sys

s = sys.stdin.readline().rstrip()
set = set()

for i in range(1, len(s)):
    for j in range(1, len(s) - i):
        k = len(s) - (i + j)
        a1 = s[:i][::-1]
        a2 = s[i:i+j][::-1]
        a3 = s[i+j:][::-1]
        set.add(a1 + a2 + a3)

print(min(set))
