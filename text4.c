#include<stdio.h>
main(){

    double num1, num2, num3;
    double sum;

    printf("실수를 입력하시오:");
    scanf("%lf %lf %lf",&num1, &num2, &num3);

    sum = num1 + num2 + num3;

    printf("세 실수의 합은:%lf",sum);
 

}