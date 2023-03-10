from sys import stdin
input = stdin.readline

count = 666
chk = 0

n = int(input())

while True:
    if '666' in str(count):
        chk+=1
        
    if chk == n:
        print(count)
        break
    
    count+=1