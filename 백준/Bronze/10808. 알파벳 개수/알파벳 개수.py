a = input()

b = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
c = [0 for _ in range(26)]

for i in a:
  for j in range(0, len(b)):
    if i == b[j]:
      c[j]+=1

for j in c:
  print(j, end=" ")