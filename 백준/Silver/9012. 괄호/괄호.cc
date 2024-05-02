#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		char arr[100];
		scanf("%s", arr);
		int str = 0;
		
		while (arr[str] != '\0')
		{

			if (arr[str] == '(')
				count++;
			if (arr[str] == ')')
				count--;
			
			if (count < 0)
			{
				printf("NO\n");
				
				break;
			}
			str++;
		}

		if (count == 0)
			printf("YES\n");
		else if (count > 0)
			printf("NO\n");
	}

	return 0;
}