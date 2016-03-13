#include <stdio.h>
int main(int argc, char * argv[])
{
    /*example for int*/
    int num1 = 2;
    int num2;
    num2 = 3;
    int num3 = num1 + num2;             //2 + 3 = 5
    int num4;  
    num4 = num3 - num1;                 //5 - 2 = 3
    int num5 = num4 * 23;               //3 * 23 = 69
    int num6 = num5 / 3;                //69 / 3 = 23

    printf("%d\n", num6);               //this for display, value of num6
    

    /*example for float*/
    float real1 = 2.3f;              	//f for represent the value is float
    float real2 = 3.4f;
    float real3 = real1 + real2;        //2.3 + 3.4 = 5.7
                                        //operater +-*/ is equal to int
    printf("%f\n", real3);             	//this for display, value of real3

    /*example for char*/
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';

    printf("%c%c%c\n", ch1, ch2, ch3);  //this for display, value of ch1, ch2, ch3

    char ch4 = 'C';						//in char, value of 'C' is 67(int) (it's a ASCII code)		
    char ch5 = '+';						//value of '+' is 53
    char ch6 = ch4 + ch5;				//so value of ch6 is 67+53=120
    									//Refer to ascii code, search at google.
    printf("%c\n", ch6); 				//ascii code 120 is 'x'
    
    return 0;
}