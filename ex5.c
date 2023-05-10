#include<stdio.h>

int min(int x, int y)
{
    if(x<y)
       return x; //x가 더 작다면 x값 리턴
    else
       return y; //아니라면 y값 리턴
}
int main(void)
{
    int x, y, small; //변수 x,y,small 선언

    printf("정수 2개를 입력하시오:");
    scanf("%d %d",&x ,&y); //x,y값 입력

    small = min(x,y); //작은 숫자를 담을 변수 선언
    printf("더 작은 값은%d입니다.",small); //%d값에 small이 들어가면서 더 작은값 출력

    return 0;


}