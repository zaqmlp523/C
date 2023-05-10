#include<stdio.h>

void print_stars() 
{
    for(int i=0; i<30; i++) //i변수선언 i<30이라는 조건 입력 후위연산자로 i값 1씩증가
    {                           
        printf("*"); //*30번 출력
    }
}
int main(void)
{
    print_stars(); //print_stars 함수 호출 
    printf("\nHello World!\n"); //출력함수 hello world 출력 \n줄바꿈 
    print_stars(); //print_stars 함수 호출 
    printf("*"); // 마지막 함수 *30개에 한개 더찍혀서 31개

    return 0;
}