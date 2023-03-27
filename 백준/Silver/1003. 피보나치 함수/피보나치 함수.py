import sys
input = sys.stdin.readline

def fibonacci(n):
    arr0=[1, 0, 1] 
    arr1=[0, 1, 1]
    if n >= 3:
        for i in range(2,n):
            arr0.append(arr0[i-1] + arr0[i])
            arr1.append(arr1[i-1] + arr1[i])
    print(f"{arr0[n]} {arr1[n]}")
            
for _ in range(int(input())):
    n = int(input())
    fibonacci(n)