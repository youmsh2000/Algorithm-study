#include <stdio.h>

int main()
{
	int bag = 0;
	int sugar = 0;
	scanf("%d", &sugar);

	while (1)
	{
		if (sugar % 5 == 0) { // 5로 완전히 나누어 떨어지면 굳이 3kg 봉지를 사용할 필요가 없기 때문에 5kg 봉지로 나누고 개수를 구한다
			bag = bag + sugar / 5; 
			printf("%d", bag);
			break; // 완전히 나누어 떨어지면 while 반복문을 탈출한다
		}
		sugar = sugar - 3; // 5로 나누어 떨어지기 전까지 3kg 봉지를 써야하기 때문에 3kg 봉지 하나씩 빼주어 봉지의 개수를 추가해준다
		bag++;

		if (sugar < 0) {
			printf("-1");
			break;
		}
	}
}