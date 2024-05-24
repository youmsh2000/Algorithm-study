#include <stdio.h>
#define SIZE 5000

int main()
{
	int N;
	int K;

	scanf("%d %d", &N, &K);

	int arr[SIZE];

	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}

	int index = 0; // 현재 위치
	int count = N; // 남아있는 사람의 수

	printf("<");

	while (count > 0) { // K번째 사람을 찾기 위해 K-1번 이동해준다
		for (int i = 0; i < K - 1; i++) {
			index = (index + 1) % N;
			while (arr[index] == 0) { // 이미 제거된 사람을 건너뛰기 위한 작업
				index = (index + 1) % N;
			}
		}

		// K번째 사람을 제거하기 위한 과정
		printf("%d", arr[index]);
		arr[index] = 0; // 제거된 사람을 표시하기 위해 0으로 표시함
		count--;

		if (count > 0) {
			printf(", ");
		}

		// 다음 사람을 가리킴
		index = (index + 1) % N;
		while (arr[index] == 0 && count > 0) {  // 앞서 했듯 이미 제거된 사람은 건너뜀
			index = (index + 1) % N;
		}
	}

	printf(">\n");

	return 0;
}