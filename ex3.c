#include<stdio.h>

int get_integer()
{
    int value; //숫자를 담을 변수 선언
    
    printf("정수를 입력하시오:");
    scanf("%d",&value); //value값 입력
    
    return value; //입력받은 value값 리턴
}
int add(int x, int y) //두수의 합을 구하는 함수
{
    return x + y; //x + y값 리턴
}
int main(void)
{
    int x = get_integer(); //x에 입력받은 함수값 호출
    int y = get_integer(); //y에 입력받은 함수값 호출

    int sum = add(x,y); //두수의 합을 담을 변수 선언
    printf("두수의 합은 %d입니다.\n",sum); //%d값에 sum(x+y)값이 들어감

    return 0;
}