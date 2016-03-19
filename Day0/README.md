# Day0: 설치
아래는 우리가 프로그램을 작성하는데 있어서 필요한 몇가지 준비물 입니다.

- notebook (PC, Mac, ...)
- [compiler](https://en.wikipedia.org/wiki/Compiler)
- [text editor](https://en.wikipedia.org/wiki/Text_editor)

[IDE](https://en.wikipedia.org/wiki/Integrated_development_environment) 라는 편하고 좋은 컴파일러 + 텍스트 에디터 툴이 있어요.
C 프로그래밍에 있어서는 우리는 몇가지 선택을 할 수 있어요.

- IDE
    - [Visual Studio](https://www.visualstudio.com/downloads/download-visual-studio-vs) (for Windows user)
    - [Xcode](https://itunes.apple.com/us/app/xcode/id497799835?mt=12) (for Mac user)
    - [Code Blocks](http://www.codeblocks.org/downloads)

- Compiler
    - [GCC](https://gcc.gnu.org/) ([MinGW for Windows](http://www.mingw.org/))

- Text Editor
    - [Sublime Text](https://www.sublimetext.com/)
    - [Notepad++](https://notepad-plus-plus.org/)
    - vim
    - emacs

만약 vim이나 emacs를 쓰신다면 이 강의가 더는 필요하지 않으실거에요 : )
저는 GCC + Sublime Text를 추천해드려요.

그럼 이제 첫 프로그램을 짜도록 해봐요.
프로그래머에게 전통으로 내려져오는 Hello World라는 프로그램을 작성해봅시다.

프로그램 코드는 아래와 같아요

```
#include <stdio.h>
int main(int argc, char * argv[])
{
    printf("Hello, world!\n");
    return 0;
}
```
>[Hello.c](https://github.com/MaybeS/STUDY2016/blob/master/Day0/example/Hello.c)

사실 이 예제 코드는 생각보다 복잡한 구성을 가지고 있고, 한번에 전부 배우는건 꽤 어려운 일이에요.
그래서 우리는 오늘 main 함수가 무슨일을 하는지, 프로그램은 어떻게 호출하는지 간단하게 알아볼거에요.

먼저 컴파일을 해봐요
>gcc hello.c

컴파일이 되었다면 a라는 실행프로그램이 생길것입니다. 이 프로그램을 실행해보도록 해요.

Hello, world!가 출력되었나요?

그러면 이제 argc, argv[]가 무엇을 하는지 알아볼꺼에요.

printf("Hello, world!\n"); 부분을 printf("%d\n", argc);로 바꾸고 컴파일 후 실행해보세요.
"의미는 argc에 있는 값을 보여주세요"라는 뜻이지만 자세한건 다음에 알아보도록 해요.

>a.exe      [windows]
>./a.out    [linux]

으로 실행했다면 아마 1이 출력될꺼에요.
이번엔 아래와 같이 실행해보세요.

>a.exe x y z
>./a.out x y z

이러면 4가 출력될꺼에요. x y z를 다른 문자들로 바꾸면서 실행해보면, 출력되는 숫자가 입력된 단어 수 라는것을 알 수 있어요.

이번에는 a와 x,y,z들을 출력해봅시다.

printf부분을 printf("%s\n", argv[0]);으로 바꾸면 
>[argc.c](https://github.com/MaybeS/STUDY2016/blob/master/Day0/example/argc.c)

a가 출력되고 여기에서 다시 [0]을 [1]로 바꾸면 x가, [2]로는 y가 [3]은 z가 출력될꺼에요.

근데 이렇게 하면 인자를 다르게 받고싶을 때마다 새로 프로그램을 짜야 하잖아요.
그래서 모든 argv를 출력해주는 프로그램을 만들어봐요.

```
#inlucde <stdio.h>
int main(int argc, char * argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}
```
>[argv.c](https://github.com/MaybeS/STUDY2016/blob/master/Day0/example/argv.c)
코드를 이렇게 고치면 모든 인자를 출력하도록 바뀔 꺼에요. 컴파일후 실행해 봅시다.

아직은 for나 printf, %s가 무엇을 의미하는지 몰라도 되요.

for 의 괄호 안에 있는 문장은 여러번 반복될 수 있구나, printf는 출력을 하는구나 정도의 느낌만 오면 되요.

**Day1에서 다시봐요**