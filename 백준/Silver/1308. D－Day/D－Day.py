import datetime
from sys import stdin
input = stdin.readline

y1,m1,d1 = map(int,input().split())
y2,m2,d2 = map(int,input().split())

arr = int(str(datetime.date(y2,m2,d2)-datetime.date(y1,m1,d1)).split()[0])
count = 0

for i in range(0,1000) :
    if i % 400 == 0 :
        count+=366
    elif i % 100 == 0 :
        count+=365
    elif i % 4 == 0 :
        count+=366
    else :
        count+=365

if arr >= count :
    print("gg")
else :
    print(f"D-{arr}")