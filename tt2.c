#include<stdio.h>

int main()
{

// while문을 이용한 1부터 원하는 숫자까지의 합 구하기 //

int i, n, sum; // 정수형 변수 선언 //

printf("정수를 입력하시오:"); // "정수를 입력하시오" 출력 //
scanf("%d", &n); // 정수형 변수 n값을 입력 //

i = 1; // 변수 초기화 //
sum += i; // 변수 초기화 //

while(i <= n) // i가 n보다 작거다 같을때 실행 //
{ 
sum += i; // sum = sum + i 와 같다 //
i++; // 후위연산자 연산후 i값에 1씩 증가 //
} 

printf("1부터 %d까지의 합은 %d입니다\n", n, sum); // 첫번째 %d값에 변수에는 n값이 두번째 %d값에 sum값이 들어가면서 출력 //

return 0; // int 0을 반환하고 함수가 종료되었다는 의미이다 //
}