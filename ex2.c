#include<stdio.h>

int max(int x, int y) 
{
    if(x>y)
       return x; //x값이 더 크다면 x값 리턴
    else
       return y; //아니라면 y값 리턴
       
}
int main(void)
{
    int x, y, larger; //변수 x, y, larger 선언

    printf("정수 2개를 입력하시오:"); 
    scanf("%d %d",&x, &y); //x,y값 입력

    larger = max(x,y); //더 큰값을 담을 변수 선언
    printf("더 큰 값은 %d입니다\n",larger); //%d값에 larger를 넣으면서 더 큰 값 반환

    return 0;
}