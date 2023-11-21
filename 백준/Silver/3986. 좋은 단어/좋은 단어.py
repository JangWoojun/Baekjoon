# import sys
# input = sys.stdin.readline

count = 0
st = []

for _ in range(int(input())):
    st = []
    for i in input():
        st.append(i)
        if len(st) != 1 and st[-1] == st[-2]:
            st.pop()
            st.pop()
    if len(st) == 0:
        count+=1

print(count)