#include <stdio.h>

int main(int argc, char * argv[])
{
	int a = 1, b = 0, c = 3;

	if( a == 1)
	{
		printf("a는 1이에요.\n");
	}

	if( b== a) {
		printf("b는 a와 같아요.\n");
	} else {
		printf("b는 a와 달라요.\n");
	}

	if (c>1)
	{
		printf("c는 1보다 커요.\n");
	}



	if(a)
	{
		printf("a는 참이에요.\n");
	}

	if(b) {
		printf("b는 참이에요.\n");
	} else {
		printf("b는 거짓이에요.\n");
	}

	if(a && !b)
	{
		printf("a는 참이고 b는 거짓이에요.\n");
	}

	if (a || b)
	{
		printf("a또는 b가 참이에요.\n");
	}
	
	if(a-c)
	{
		printf("%d는 참이에요.\n", a-c);
	}




	return 0;
}