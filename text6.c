#include<stdio.h>
main(){
    
    int number;

    printf("정수를 입력하시오:");
    scanf("%d",&number);

    if(number > 0)
    printf("양수입니다.");
    printf("입력된값은 %d입니다",number);
}