#include <stdio.h>
#include <stdlib.h>


int Binary_Search(int arr[], int left, int right, int card_num) {
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == card_num) // 찾다가 카드의 숫자가 일치(동일)할 경우
			return 1;

		if (arr[mid] > card_num)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return 0;
}

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2)
		return -1;
	else if (num1 > num2)
		return 1;
	else
		return 0;
}

	int main() {

		int N;
		int M;

		scanf("%d", &N);
		// int card1[500000]; 이렇게 변수를 선언했더니 그냥 코드가 종료되어버린다...(크기가 초과된 것 같다)
		int* card1 = (int*)malloc(N * sizeof(int));
		// 이렇게 동적으로 할당해주는 malloc 함수를 인터넷에서 찾아본 뒤 활용해보았더니
		// 다행히 잘 작동하게 되었다

		for (int i = 0; i < N; i++)
		{
			scanf("%d", &card1[i]);
		}

		qsort(card1, N, sizeof(int), compare); // 이진 탐색을 하기 위해서는 반드시 정렬되있어야 한다
		                                       // 그러므로 strlib에 있는 qsort 함수를 가져와 정렬을 시켜주어야 한다

		scanf("%d", &M);
		
		for (int i = 0; i < M; i++)
		{
			int card2;
			scanf("%d", &card2);
			printf("%d ", Binary_Search(card1, 0, N - 1, card2));
		}

		
		return 0;
	}