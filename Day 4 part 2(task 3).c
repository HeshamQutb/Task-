#include <stdio.h>

int main()
{
	int x;
	printf("Enter Your Number please:");
	scanf("%d", &x);
	if (x % 2 == 0)
	{
		printf("EVEN\n");
	}
	else
	{
		printf("ODD\n");
	}
}
