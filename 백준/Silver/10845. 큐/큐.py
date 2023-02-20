from collections import deque
import sys

input = sys.stdin.readline
n = int(input())
q = list()

for _ in range(n):
    sum = input()
    		
    if "push" in sum:
        q.append(int(sum.split(' ')[1]))
        
    elif "pop" in sum:
        if not q: print(-1)
        else: print(q.pop(0))
        
    elif "size" in sum:	
        print(len(q))
        
    elif "empty" in sum:		
        if not q: print(1)		
        else: print(0)
        
    elif "front" in sum:			
        if not q: print(-1)			
        else: print(q[0])
        
    elif "back" in sum:				
        if not q: print(-1)			
        else: print(q[-1])
