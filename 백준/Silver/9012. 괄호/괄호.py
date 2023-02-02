n = int(input()) # 반복 횟수

for i in range(n): # 반복
    sum = list(input()) # TC 받기
    
    list_size = len(sum) # 처음 TC 사이즈 저장
    do_while = True # do while 문 용
    
    while list_size != len(sum) or do_while: # 처음은 무조건 실행 그 뒤로는 TC에 변화가 있었어야지만 반복
        if len(sum) == 0:
            print("YES")
            break
        do_while = False # 한번만 무조건 실행용            
        j = 0  
        list_size = len(sum)
        while j < (len(sum) - 1): # TC 완전 탐색
            if sum[j] == "(" and sum[j+1] == ")": # 만약 () 모양이 나온다면 삭제
                del sum[j:j+2]
                j = -1
            j+=1
    
    if len(sum) != 0:
        print("NO")