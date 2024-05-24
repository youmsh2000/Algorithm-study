#include <stdio.h>
#define size 1000

int main()
{

	int N;
	int arr[size];
	int time = 0;
	int swap = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);

	}


	// 합이 최소값이 될 수 있도록 정렬해주는 식 (swap 사용)
	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = swap;  // 예전에 1학년 때 코딩하던 과제에서 꽤 많이 썼던 방식이었던 것 같은데 
				                    // 아무래도 정렬을 하기 위해 계속 스위칭을 해주는 방법을 떠올리다가
				                    // 이 방법을 떠올리게 되었다
			}
		}
	}

	// 정렬이 되었으니 합을 구해주는 식
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			time = time + arr[j];
		}
		if (i == N - 1)
			printf("%d", time);
	}



}