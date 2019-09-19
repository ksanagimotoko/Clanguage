#include <stdio.h>

int main()
{

	// 반복할 명령이 하나일 경우
	for(int i=0; i<5; i++)
		printf("*");

	// 반복할 명령이 2개 이상일 경우
	for(int i=0; i<5; i++)
	{
		printf("*");
		printf("\n");
	}

	return 0;
}



