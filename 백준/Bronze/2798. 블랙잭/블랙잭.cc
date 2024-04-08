#include <stdio.h>



int main()
{
	int N;
	int M;
	int sum = 0;  
	int arr[100] = { 0, }; //n은 100을 넘지 않아야 하기에 n개의 카드 개수 배열을 초기화
	//3번 문제와 마찬가지로 처음에 배열을 초기화하는 법을 몰랐다가 초기화하는 방법을 인터넷에서 검색 후 활용하게 되었음
	int max = 0;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", & arr[i]);
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = arr[i] + arr[j] + arr[k];
				if (sum > max && sum <= M)
					max = sum;
			}
		}
	} //인터넷에서 브루트 포스 관련 알고리즘에 대해 조사 후 이중과 삼중 for문을 사용하는 예시 알고리즘을 
	  //확인 및 공부 후에 적용하게 되었음

	printf("%d\n", max);
	return 0;
}