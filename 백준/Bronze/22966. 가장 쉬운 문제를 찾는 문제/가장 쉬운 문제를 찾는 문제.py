n=int(input())

a=[0]*n
b=[0]*n

for i in range(n):
    sum=input()
    a[i]=sum[:len(sum)-2]
    b[i]=int(sum[-1])

dict=dict(zip(b,a))

print(dict[min(dict.keys())])