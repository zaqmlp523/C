#include<stdio.h>
main() {
    double rate;
    double usd;
    int krw;

    printf("환율을 입력하시오:");
    scanf("%lf",&rate);
    printf("원화 금액을 입력하시오:");
    scanf("%d",&usd);

    usd = krw / rate;

    printf("원화 %d원은 %lf달러 입니다.",krw,usd);

}