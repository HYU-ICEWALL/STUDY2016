#include <stdio.h>

int main(int argc, char * argv[])
{
	int a = 0;
	while(a < 10)
	{
		printf("a: %d\n", a);
		a++;
	}

	a = 0;
	while(a > -5)
	{
		printf("a: %d\n", a);
		a--;
	}

	a =0;
	while(a++<10)
	{
		printf("a: %d\n", a);
	}

	a=3;
	while(a==3)
	{
		printf("a: %d\n", a);
		a++;
	}
	
	while(a!=3)
	{
		printf("a: %d\n", a);
		a++;
	}

	return 0;
}