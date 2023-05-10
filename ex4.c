#include<stdio.h>

int factorial(int n)
{
    int result = 1; //변수 result는 1 선언

    for(int i=1; i<=n; i++) //변수 i선언 i<=n이라는 조건입력 후위연산자로 i값 1씩 증가
    
       result *= i; //result = result * i와 같다
       return result; //result값 반환 
    
        
}
int main(void)
{
    int n; //숫자를 담을 변수 선언
    printf("알고 싶은 팩토리얼 값은?");
    scanf("%d",&n); //n값 입력
    printf("%d!의 값은 %d입니다.\n",n ,factorial(n)); //%d!값에 n값이 들어가고 %d값에 팩토리얼 함수를 이용해서 팩토리얼값 계산

    return 0;
}