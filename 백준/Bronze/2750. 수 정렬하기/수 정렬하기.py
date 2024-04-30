N = int(input())
NumArr = []

for i in range(N) :
    NumArr.append(int(input()))   # 저번에도 사용했었지만 잊어버렸던 파이썬에서 리스트 끝에 새로운 요소를 추가하려면 append 함수를
                                  # 써야한다는 사실을 다시 한번 자각하게 됨

for i in range(len(NumArr)) :
    for j in range(len(NumArr)) :
        if NumArr[i] < NumArr[j] :
            NumArr[i], NumArr[j] = NumArr[j],NumArr[i]

for n in NumArr :
    print(n)

# 이 문제를 보고 느낀점 : 아 정렬을 써야겠다 => 자료구조 시간에 배운 정렬들을 찾아서 써봐야겠다 => 정렬 알고리즘 검색 
# => 사실 어떤 알고리즘을 써야 최적의 결과가 나오는지 잘 몰라서 일단 버블 sort를 찾아서 사용 
# c언어로 하려다 너무 복잡할 거 같아서 파이썬으로 노선 변경 