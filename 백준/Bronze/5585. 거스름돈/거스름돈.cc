#include <stdio.h>


int main()
{

	int pay = 0;
	int payback;
	int result = 0;
	scanf("%d", &pay);

	payback = 1000 - pay;

	result = result + payback / 500;
	payback = payback % 500;
	result = result + payback / 100;
	payback = payback % 100;
	result = result + payback / 50;
	payback = payback % 50;
	result = result + payback / 10;
	payback = payback % 10;
	result = result + payback / 5;
	payback = payback % 5;
	result = result + payback / 1;

	printf("%d", result);

	return 0;

	// 앞으로 이런 문제만 내주세요 앞으로 이런 문제만 내주세요 앞으로 이런 문제만 내주세요 앞으로 이런 문제만 내주세요
	// 앞으로 이런 문제만 내주세요 x 1000000000000000000
}