#include <stdio.h>

int add(int first, int second)
{
	return first + second;
}
int sub(int first, int second)
{
	return first - second;
}
int mul(int, int);
int div(int first, int second)
{
	return first / second;
}
int main(int argc, char * argv[])
{
	int a = 3, b = 2, c = 5, d;
	d = add(a, b);					//3+2=5
	printf("a + b = %d\n", d);		//print d=5
	d = mul(d, c);					//5*5=25
	printf("d + c = %d\n", d);		//print d=25

	return 0;
}
int mul(int first, int second)
{
	return first * second;
}