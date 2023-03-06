def solution(babbling):
    answer = 0
    chk_word = ["aya", "ye", "woo", "ma"]
    for i in babbling:
        chk = ""
        count = 0
        for j in i:
            chk+=j
            if chk in chk_word:
                chk = ""
                count+=1
        if count > 0 and chk == "":
            answer+=1
    return answer

print(solution(["ayaye", "uuuma", "ye", "yemawoo", "ayaa"]))