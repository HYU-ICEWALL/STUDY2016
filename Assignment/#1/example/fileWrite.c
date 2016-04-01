#include <stdio.h>

int main(int argc, char * argv[])
{
	if(argc < 2)
	{
		printf("you must input filename.\n");
		return -1;
	}

	FILE * fp = fopen(argv[1], "w");
										//이렇게쓰면 fp는 파일 포인터가되요.
										//이 fp에 fopen으로 호출해주면
										//해당 파일을 열 수 있어요.
										//뒤에있는 argv[1]은 파일 이름이고,
										//"w", write를 쓰면 파일을 쓸 수 있어요.

	printf("input text: ");

	char ch, chk;
	do {
		chk = scanf("%c", &ch);
		if (chk < 0)					//우리가 입력할땐 Ctrl+Z를 누르면
										//이제 그만 입력하라고 할 수 있어요.
										//막 글자를 치다가 Ctrl+Z를 누르면
										//chk값이 -1이 되서 반복이 종료되요.
			break;
			
		fprintf(fp, "%c", ch);			//fprintf도 printf와 비슷해요.
										//맨 앞의 인자로 파일 포인터가 추가되어서
										//해당파일에 출력하는 역활을 해요.
	} while(1);

	fclose(fp);							//파일은 쓰고나면 fclose로 닫아줘야되요.
	return 0;
}