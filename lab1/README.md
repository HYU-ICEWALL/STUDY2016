# Lab1 : To get close with C

A "Hello, world!" program is often used to introduce beginning programmers to a programming language.
According to tradition, we will write "Hello, world!" program.


```
#include <stdio.h>
int main(int argc, char * argv[])
{
    printf("Hello, world!\n");
    return 0;
}
```
> [Hello, world.c](https://github.com/MaybeS/STUDY2016/blob/master/lab1/code/Hello, world.c)

There are three thing to learn in this chapter.

- Variable
- Function
- #include Directive

-----

# C like a recipe
C program code is like a recipe. 

In recipe, there are sevral ingredients for cooking. <br>
And written how to handle ingredients which prepared. <br>
Finally, there is the result. 

The difference between recipe and C code is only that we can eat result of recipe, but C code can't

## Variable
Variable in code like a ingredients in recipe. <br>
It can be changed. We can input something to variable, display value of variable.

In C and many other programming language, there a type of variable. <br>
As a tool for the material, the way to handle is all different. <br>

Introduce several types of variable.

- int
- float
- char

It was distinguished by size of variable in memory. <br>
*Story about memory is a little difficult. so described later.*

**int** for variable which contain integer value.<br>
**float** for variable which contain real number.<br>
**char** for variable which contain a charater.<br>

some example using variable type.
```
int a = 3;
float b = 1.2f;
char c = 'A';
```
> [variable.c](https://github.com/MaybeS/STUDY2016/blob/master/lab1/code/variable.c)

## Function
Function in code like a sub recipe for recipe.
As you can simplify the process repeated in recipes, function simplify the process in code.
The structure of function in code like this.
```
[return_type] [function_name]([arg_type] [arg_name], ...)
{
    /*codes*/
}
```
In the Hello, world! program, we can find a function called 'main' <br>
In short, When [argument] enters [return] comes out. <br>
There is some arguemnts in main function. *Detail described later.* <br>
The return type of main is **int**, so at last main return 0 that integer value. <br>

Now you can make simple function add two integer, return addition of integers. <br>

some example using function.
> [function.c](https://github.com/MaybeS/STUDY2016/blob/master/lab1/code/function.c)

In sample code, you can find out something difference. <br>
The mul function is written twice. over and under the main function that mul function is used. <br>
Upper mul function is function declaration. Downer is detail of defined function. <br>
If without declaration, main can't find mul function, because mul function is under the main function. <br>
So, we must write the function over the main, or write declaration.

## #include Directive

**following Lab2.**