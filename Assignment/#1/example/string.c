#include <stdio.h>
#include <string.h>
int main(int argc, char * argv[])
{
	char ch[100], ca[100], cb[100], cc[100];
	scanf("%s", ch);		//문자열을 입력받아요.

	printf("ch: %s\n", ch); //문자열을 출력해요.

	strcpy(ca, ch);			//strcpy는 문자열을 복사해주는 함수에요.
							//string.h에 있어서 사용하려면 string.h를
							//include 해야되요.
							//해당 문장은ch를 ca에 복사한다는 뜻이고,
							//끝에있는 0까지 복사해줘요.

	printf("ca: %s\n", ca);

	//ch = "this is sentence.";
							//이런 문장은 쓸 수 없어요. 
							//char ch[100] = ""; 이렇게 선언할때는
							//초기화할수있지만 그후에는 =을 이용해서 
							//대입하는게 불가능해요.
							//따라서 방금배운 strcpy를 써야해요.
	
	strcpy(ch, "this is sentence.");
	printf("ch: %s\n", ch);

							//여기서 공백을 기준으로 문자열을 자라서 ca다 넣어보죠

							//strlen은 해당 문자열의 길이를 반환해줘요.
							//여기선 this is sentence.니까
							//17을 반환해주겠죠.
	for (int i = 0; i < strlen(ch); i++)
	{
		ca[i] = ch[i];
		if(ch[i] == ' ')
		{
			ca[i] = 0;
			break;			//break는 반복문을 탈출하는 역활을해요.
							//for든 while이든 조건이 만족되지않아도
							//break를 쓰면 그 반복문이 종료되어요.
		}
	}

	printf("ca: %s\n", ca);	//오홍 this만 잘 잘라졌네요.
							//그러면 추가적으로 is나 sentence등도 분리해보아요.
	return 0;
}