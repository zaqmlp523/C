#include<stdio.h>
main(){
    int year;

    printf("연도를 입력하시오:");
    scanf("%d",&year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    printf("윤년입니다.",year);
    else
    printf("윤년이 아닙니다.",year);
}