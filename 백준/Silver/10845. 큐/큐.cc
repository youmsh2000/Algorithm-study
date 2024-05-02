#include <stdio.h>
#include <string.h>
#define que_size 10000


int que[que_size];
int start = 0;
int end = 0;
int count = 0;

void push(int a)
{
	que[end++] = a;
	++count;
}

void pop() {
	if (count != 0)
	{
		printf("%d\n", que[start++]);
		--count;
	}
	else
		printf("-1\n");
}

void size() {
	printf("%d\n", count);
}

void empty() {
	if (count == 0)
		printf("1\n");
	else
		printf("0\n");
}
void front()
{
	if (count != 0)
		printf("%d\n", que[start]);
	else
		printf("-1\n");
}

void back()
{
	if (count != 0)
		printf("%d\n", que[end - 1]);
	else
		printf("-1\n");
}



int main()
{
	int a = 0;
	int num = 0;
	char arr[10];
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%s", arr);

		if (!strcmp(arr, "push"))
		{
			scanf("%d", &num);
			push(num);
		}

		else if (!strcmp(arr, "pop"))
			pop();
		else if (strcmp(arr, "size") == 0)
			size();
		else if (strcmp(arr, "empty") == 0)
			empty();
		else if (strcmp(arr, "front") == 0)
			front();
		else if (strcmp(arr, "back") == 0)
			back();
	}
	return 0;
}