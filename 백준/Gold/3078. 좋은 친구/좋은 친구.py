import sys
from collections import defaultdict

q = []
dict = defaultdict(int)
input = sys.stdin.readline

n, k = map(int, input().split())
count = 0

for _ in range(n):
    q.append(len(input()))

for i in range(n):
    if (i > k):
        dict[q[i-k-1]] -= 1
        
    count += dict[q[i]]
    dict[q[i]] += 1

print(count)