#include <stdio.h>

int main()
{
	int N = 0; // 문제에서 주어진 변수 (입력값)
	int n = 0;  
	int count = 0; // 소수의 개수를 세어서 출력해주는 변수

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &n); //여기서 n은 소수인지 아닌지 뒤에 입력값 N을 j=2부터 n까지 나누어서 판별할 수 있게 함
		for (int j = 2; j <= n; j++)
		{
			if (n == j)
				count++; 
			if (n % j == 0)
				break;
		}
	}
	printf("%d", count);

	return 0;
	

}