n = int(input())
m = 1
count = 1
sum = 6

while n > m:
    count += 1
    m += sum
    sum += 6
    
print(count)