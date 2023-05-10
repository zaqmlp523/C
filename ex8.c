#include<stdio.h>

int get_integer(void)
{
    int n; //숫자를 담을 변수 선언

    printf("정수를 입력하시오:");
    scanf("%d",&n); //n값 입력
    
    return n; //n값 리턴
}
int is_prime(int n) //주어진 정수가  소수인지 검사하는 함수
{
    int i; // 변수 i선언

    for(i=2; i<n; i++){ //i=2선언 i<n조건 입력 후위연산자 i값에 1씩증가
        if(n%i == 0) //n값을i로 나눴을때 나머지가 0과같으면 참
        return 0;
    }
    return 1;
}
int main(void)
{
    int n; //변수선언
    n = get_integer(); //n값에 함수값이 들어감

    if(is_prime(n) == 1) //위 함수가 참일때 소수입니다 출력
         printf("%d은 소수입니다.\n",n);
    else //아니면 소수가 아닙니다 출력
         printf("%d은 소수가 아닙니다.\n",n);
    
    return 0;
}