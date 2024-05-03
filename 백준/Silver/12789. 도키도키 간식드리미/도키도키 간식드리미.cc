#include <stdio.h>

int stack[1000];
int top = -1;

void push(int data)
{
	stack[++top] = data;
}

int pop()
{
	return stack[top--];
}

int main()
{
	int N;
	int pass = 1; //현재 간식을 받을 수 있는 번호
	int num;

	scanf("%d", &N);

	while (N--) {
		scanf("%d", &num);
		if (num == pass) { // 맨 앞에 있는 사람의 번호와 간식을 받을 번호가 일치하면 번호를 1 올려서 다음 놈을 실행
			pass++;
			while (top >= 0 && stack[top] == pass) // 이 부분을 이해하는데 시간이 걸렸음
			{
				pop(); // 설 수 있는 공간에 넣는 작업과 거기서 빼는 작업만 수행 => 스택 함수 중 pop과 push만 활용
				pass++;
			}
		}
		else
		{
			push(num); // 번호가 같지 않으면 push를 이용해 설수 있는 공간(즉 대기장소)로 밀어넣는다
		}
		
	}
	
	if (top == -1)
		printf("Nice");
	else
		printf("Sad");

	return 0;
}

// 이 문제는 어떻게 해야하는지 머리로는 이해하겠는데 코드로 구현하는데 어려움을 느꼈음 
// 결국 검색해서 코드를 참고하긴 하였지만 stack에 관련하여 이를 어떻게 구현하고 활용할지에 대해
// 지난 코드들까지 다 복습해야겠다고 생각했음 (근데 좀만 더 생각했으면 됬을 거 같기도 한데 다시 생각해보니까 어려웠던 것 같음... (못푼 1,4보단 괜찮은 거 같기도...))