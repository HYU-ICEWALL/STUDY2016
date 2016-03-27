#include <stdio.h>

int main(int argc, char * argv[])
{
	// C90과 vs 2010은 이 코드가 컴파일 되지 않을 수 있어요.
	// 이유는 for(선언;조건;반복)에서 선언안에 변수를 선언하는게 허용되지 않았기 때문이에요.
	// gcc라면 컴파일할떄 -std=c99옵션을 주어서 컴파일하면되고
	// vs 2010는 컴파일 옵션을 주는게 꽤 복잡하니까 선언만 밖으로 빼어주면되요
	//int i;
	//for (i=0; i<10; i++) 이런식으로

	for(int i = 0; i < 10; i++)		
	{
		printf("%d\n", i);
	}

	for(int i = 10; i; i--)
		printf("%d\n", i);

	for(int i = 2; i < 10; i++)
		for(int j = 1; j < 10; j++)
			printf("%d x %d = %d\n", i, j, i*j);

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < i+1; j++)
			printf("*");
		printf("\n");
	}

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5-i; j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}