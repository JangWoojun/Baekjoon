import heapq
import sys

pq = []

input = sys.stdin.readline

for _ in range(int(input())):
    sum = int(input())
    if sum != 0:
        heapq.heappush(pq, (abs(sum),sum))
    else:
        if len(pq) == 0:
            print(0)
        else:
            print(heapq.heappop(pq)[1])