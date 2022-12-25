count = 0

while True :
  n = int(input())
  count += 1
  if n == 0 :
    break
  if n % 2 != 0 :
    print(f"{count}. odd {n//2}",sep='')
  else :
    print(f"{count}. even {n//2}")