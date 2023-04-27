#include<stdio.h>
main(){
    
    int number;

    printf("정수를 입력하시오:");
    scanf("%d",&number);

    if(number % 2 == 0)
    printf("입력된 정수는 짝수입니다");
    else
    printf("입력된 정수는 홀수입니다.");

    
}