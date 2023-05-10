#include<stdio.h>

int get_integer()
{
    int x; //숫자를 담을 변수 선언
    
    printf("정수를 입력하시오:");
    scanf("%d",&x); //x값 입력

    return x; //x값 리턴
}
int main(void)
{
    if(get_integer() %2 == 0) /*조건문 get_integer에 넣은 값이 2로 나눈 
                              나머지가 0일경우 짝수를 출력 아니면 홀수를 출력*/
       printf("짝수입니다.");  
    else   
       printf("홀수입니다.");
}