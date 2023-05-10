#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int coin_toss(void); //동전을 던지는 함수

int main(void)
{
    int toss; //동전을 던질 변수 선언
    int heads = 0; //동전의 앞부분 
    int tails = 0; //동전의 뒷부분
    srand((unsigned)time(NULL));

    for(toss=0; toss<100; toss++){ //후위연산자로 toss값이 1씩증가하여 100번실행
        if(coin_toss() == 1) //이 조건문이 참일때 heads에 1씩 증가
            heads++; 
        else                 //아니라면 tails에 1씩 증가
            tails++;
    }
    printf("동전의 앞면:%d\n",heads); //동전 앞부분나온만큼 출력
    printf("동전의 뒷면:%d\n",tails); //동전 뒷부분나온만큼 출력
    
    return 0;
}
int coin_toss(void)
{
    int head = rand() % 2; //변수에 0 또는 1 중에서 무작위로 선택된 값을 할당해준다
    
    return head; //head값 리턴
}

