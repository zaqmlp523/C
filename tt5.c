#include<stdio.h>

int main(void)
{ 

//반복을 이용한 팩토리얼 구하기 //

long fact=1; // 정수형 변수 선언 //
int i, n; // 정수형 변수 선언 //

printf("정수를 입력하시요:"); //"정수를 입력하시오" 출력 //
scanf("%d", &n); // n에 들어갈 변수값 입력 //

for(i = 1;i <= n; i++) // i=1 선언 i가 n보다 작거나 같을때 실행 i++후위연산자 연산후 i값 1씩 증가 //

fact = fact * i; // n값을 입력후 거기에맞는 조건문 실행한다음 fact값과 계속 곱해서 값이 나온다 //

printf("%d!은 %d입니다.\n",n,fact); // 첫번째 %d에 n값이 들어가고 두번째 %d값에 fact값이 들어간다 //

return 0; // int 0을 반환하고 함수가 종료되었다는 의미이다 //
} 
