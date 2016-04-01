#include <stdio.h>

int main(int argc, char * argv[])
{
	if(argc < 2)
	{
		printf("you must input filename.\n");
		return -1;
	}

	FILE * fp = fopen(argv[1], "r");
										//이렇게쓰면 fp는 파일 포인터가되요.
										//이 fp에 fopen으로 호출해주면
										//해당 파일을 열 수 있어요.
										//뒤에있는 argv[1]은 파일 이름이고,
										//"r", 은 read,즉 파일을 읽겠다는 의미고
										//"w", write를 쓰면 파일을 쓸 수 있어요.

	char ch, chk;
	do {
		chk = fscanf(fp, "%c", &ch);	//fscanf는 scanf랑 똑같아요 대신
										//첫번째 이름으로 파일 포인터를 받아서
										//우리가 입력하는 값이 아닌 파일의 값을
										//입력받아와요.
		
		if (chk < 0)					//scanf나 fscanf의 return값(반환값)
										//은 그 scanf나 fscanf의 성공 여부를 나타내요.
										//즉 -1은 성공하지 못했다는 뜻이겠죠. 
			break;
			
		printf("%c",ch);
	} while(1);

	fclose(fp);							//파일은 쓰고나면 fclose로 닫아줘야되요.
	return 0;
}