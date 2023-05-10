#include<stdio.h>

int multiply(int x, int y) //두 수의 곱을 구하는 함수
{
    int result = x * y; //result값에 x*y값을 저장
    return result; //result값 리턴
}
int main()
{
    int x, y, mul; //변수 x,y,mul 선언

    printf("정수 2개를 입력하시오:");
    scanf("%d %d",&x, &y); //x,y값 입력

    mul = multiply(x,y); //mul값에 multiply함수값이 들어감
    printf("두 수의 곱은%d입니다.",mul); 

    return 0;

   
}